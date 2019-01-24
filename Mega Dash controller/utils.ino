void utils(){

#if defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)


//Inputs
      pinMode(auxt1, INPUT);
      pinMode(auxt2, INPUT);
      pinMode(batt, INPUT);
      pinMode(O2in, INPUT);
      pinMode(fuelin, INPUT);
      pinMode(oilt, INPUT);
      pinMode(oilp, INPUT);
      pinMode(fuelp, INPUT);
      pinMode(tachin, INPUT);
//Outputs
      pinMode(auxout1, OUTPUT);
      pinMode(auxout2, OUTPUT);
      pinMode(auxout3, OUTPUT);
      pinMode(auxout4, OUTPUT);

      
#elif defined(CORE_STM32) || defined(CORE_TEENSY)

//Future development
      pinMode(auxt1, INPUT_ANALOG);
      pinMode(auxt2, INPUT_ANALOG);
      pinMode(batt, INPUT_ANALOG);
      pinMode(O2, INPUT_ANALOG);
      pinMode(fuelin, INPUT_ANALOG);
      pinMode(oilt, INPUT_ANALOG);
      pinMode(oilp, INPUT_ANALOG);
      pinMode(fuelp, INPUT_ANALOG);
      pinMode(tachin, INPUT);
//Outputs
      pinMode(auxout1, OUTPUT);
      pinMode(auxout2, OUTPUT);
      pinMode(auxout3, OUTPUT);
      pinMode(auxout4, OUTPUT);
#endif


}
