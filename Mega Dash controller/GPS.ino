void gpsinfo(){
   if (gps.available(Serial2))
    fix = gps.read(); // get the entire, assembled fix structure 
}
