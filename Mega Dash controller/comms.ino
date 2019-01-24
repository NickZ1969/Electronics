#include <Arduino.h>

/*
Speeduino Can interface
Copyright (C) Darren Siepka
A full copy of the license may be found in the projects root directory

Based on code by Josh Stewart for the Speeduino project , see www.Speeduino.com for more info
*/

/*
This is called when a command is received over serial from TunerStudio / Megatune
It parses the command and calls the relevant function
*/
#include "comms.h"
#include "globals.h"
//#include "storage.h"


void command()
{
    switch (Serial1.read())
          {
          case 'A':
                  while (Serial1.available() == 0) {}
                  replylength = (Serial1.read());              //read in reply length
                  for (byte rdata = 0; rdata < replylength; rdata++) //read x bytes of data according to replylength
                      {
                       realtimebuffer[rdata] = (Serial1.read());
                      }
          break;  

          case 'r':          
                  while (Serial1.available() == 0) {}
                  replylength = (Serial1.read());              //read in reply length
                  for (byte rdata = 0; rdata < replylength; rdata++) //read x bytes of data according to replylength
                      {
                       realtimebuffer[rdata] = (Serial1.read());
                      }        
                  //Serial.println(realtimebuffer[0]);
          break;
    }

return;
 
}

void sendTheCommand(uint8_t commandletter, uint8_t canid, uint16_t cmdoffset, uint16_t cmdlength)
{
  Serial1.write(commandletter);          // send command letter to the Speeduino
   if (commandletter == 'r')                  //the next 5 bytes ned only be sent if it is an "r" command
    {
      Serial1.write(canid);
      Serial1.write(0x30);
      Serial1.write(lowByte(cmdoffset));
      Serial1.write(highByte(cmdoffset));
      Serial1.write(lowByte(cmdlength));
      Serial1.write(highByte(cmdlength));  
    }  
}


