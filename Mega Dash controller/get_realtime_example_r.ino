/*
Dash Controller.

Copyright (C) Nick Hay

This program is distributed in the hope that it will be useful,la
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
*/
#include "globals.h"
#include "comms.h"
#include <Arduino.h>
HardwareSerial &DisplaySerial = Serial3;
#include <Adafruit_NeoPixel.h>
#include <NMEAGPS.h>
static NMEAGPS         gps;
static gps_fix         fix;
static NeoGPS::time_t  localTime;
static const int brightness=100;
byte brightness1;
#define PIN_neo 6  //Which pin the pixels are connected to
#define LED_COUNT 8  //Number of pixels used

// Create an instance of the Adafruit_NeoPixel class called "leds".
// That'll be what we refer to from here on...
Adafruit_NeoPixel leds = Adafruit_NeoPixel(LED_COUNT, PIN_neo, NEO_GRB + NEO_KHZ800);

int mainLoopCount;
int speed;
int e;
int counter;
int TpsValue;
int MapValue;
int CoolValue;
int AfrValue;
int RpmValue;
int auxt1 = A0;
int auxt2 = A1;
int batt = A2;
int O2in = A3;
int fuelin = A4;
int oilt = A5;
int oilp = A6;
int fuelp = A7;
int tachin=21;

int auxout1=38;
int auxout2=40;
int auxout3=36;
int auxout4=34;
int Auxtemp1;
int Auxtemp2;
int Battery;
int O2sensor;
int Fuelguage;
int Oiltemp;
int Oilpress;
int fuelpress;


int RPMbar;
unsigned int RPM;



void setup() {
  // put your setup code here, to run once:
  
  DisplaySerial.begin(115200);       // your console serial port
  Serial1.begin(115200);
  Serial2.begin(9600); 
  //Serial.print ("bauds=115200\xFF\xFF\xFF") ;
  leds.begin();  // Start up the LED strip
  leds.show();   // LEDs don't actually update until you call this function
  leds.setBrightness(brightness); 
  utils();

}

void loop() 
{

 // put your main code here, to run repeatedly:
        // send command to the Speeduino

 
        sendTheCommand(maincommand,tsCanId,realtime_offset,realtime_bytes);
        if (Serial1.available() > 0)      // if mysoftSerial has data then do the command subroutine
        {
          command();
          for (byte senddata = 0; senddata < replylength; senddata++) //read all 8 bytes of data
                      {

                      }
        }

gpsinfo();       
sensors();
Display();
neopixel();

//      Serial.println(realtimebuffer[0]);

      delay (50);     // wait 0.1 second
}
