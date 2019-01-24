

void sensors(){
  
O2sensor=analogRead(O2in);
Oilpress=analogRead(oilp);
fuelpress=analogRead(fuelp);

counter++;
  if (counter >= 30) {
    counter = 0;
  }
  if (counter == 15) {
  
Auxtemp1=analogRead(auxt1);
Auxtemp2=analogRead(auxt2);
Battery=analogRead(batt);
Fuelguage=analogRead(fuelin);
Oiltemp=analogRead(oilt);

  }
}
