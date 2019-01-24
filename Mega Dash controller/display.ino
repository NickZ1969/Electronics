void Display(){
  
  DisplaySerial.print("MAP.val=");
  DisplaySerial.print(realtimebuffer[0]);
  DisplaySerial.write(0xff);
  DisplaySerial.write(0xff);
  DisplaySerial.write(0xff);
  
  DisplaySerial.print("AIR.val=");
  DisplaySerial.print(realtimebuffer[2]);
  DisplaySerial.write(0xff);
  DisplaySerial.write(0xff);
  DisplaySerial.write(0xff);

  e=fix.speed_kph();
  DisplaySerial.print("KPH.val=");
  DisplaySerial.print(e);
  DisplaySerial.write(0xff);
  DisplaySerial.write(0xff);
  DisplaySerial.write(0xff);
  
  RPM = ((realtimebuffer[11] << 8) | (realtimebuffer[10]));
  //RPMValue=map(realtimebuffer[14],0,100,0,8000);
  DisplaySerial.print("RPM.val=");
  DisplaySerial.print(RPM);
  DisplaySerial.write(0xff);
  DisplaySerial.write(0xff); 
  DisplaySerial.write(0xff);

  RPMbar=map(RPM,0,5250,0,100);
  DisplaySerial.print("j0.val=");
  DisplaySerial.print(RPMbar);
  DisplaySerial.write(0xff);
  DisplaySerial.write(0xff);
  DisplaySerial.write(0xff);

  DisplaySerial.print("TPS.val=");
  DisplaySerial.print(realtimebuffer[20]);
  DisplaySerial.write(0xff);
  DisplaySerial.write(0xff);
  DisplaySerial.write(0xff);
  
  DisplaySerial.print("t10.txt=");
  DisplaySerial.write(0x22);
  DisplaySerial.print(realtimebuffer[6]/10.0);
  DisplaySerial.write(0x22);
  DisplaySerial.write(0xff);
  DisplaySerial.write(0xff);
  DisplaySerial.write(0xff);
  
int oilpcorrection=map(Oilpress,0,1024,0,150);
DisplaySerial.print("oil.val=");
DisplaySerial.print(oilpcorrection);
DisplaySerial.write(0xff);
DisplaySerial.write(0xff);
DisplaySerial.write(0xff);

int fuelpresscorrection=map(fuelpress,0,1024,0,150);
DisplaySerial.print("n0.val=");
DisplaySerial.print(fuelpresscorrection);
DisplaySerial.write(0xff);
DisplaySerial.write(0xff);
DisplaySerial.write(0xff);

if (counter == 15) { 
  
CoolValue=map(realtimebuffer[3],0,255,-40,220);
DisplaySerial.print("h2o.val=");
DisplaySerial.print(CoolValue);
DisplaySerial.write(0xff);
DisplaySerial.write(0xff);
DisplaySerial.write(0xff);

int oiltcorrection=map(Oiltemp,0,1024,-40,200);
DisplaySerial.print("oilt.val=");
DisplaySerial.print(oiltcorrection);
DisplaySerial.write(0xff);
DisplaySerial.write(0xff);
DisplaySerial.write(0xff);

int fuelpcorrection=map(fuelpress,0,1024,0,150);
DisplaySerial.print("fuelpval=");
DisplaySerial.print(fuelpcorrection);
DisplaySerial.write(0xff);
DisplaySerial.write(0xff);
DisplaySerial.write(0xff);

int Fuelguagecorrection=map(Fuelguage,0,1024,0,100);
DisplaySerial.print("j1.val=");
DisplaySerial.print(Fuelguagecorrection);
DisplaySerial.write(0xff);
DisplaySerial.write(0xff);
DisplaySerial.write(0xff);

  DisplaySerial.print("BV.txt=");
  DisplaySerial.write(0x22);
  DisplaySerial.print(realtimebuffer[5]/10.0);
  DisplaySerial.write(0x22);
  DisplaySerial.write(0xff);
  DisplaySerial.write(0xff);
  DisplaySerial.write(0xff);

  DisplaySerial.flush();
}
}
