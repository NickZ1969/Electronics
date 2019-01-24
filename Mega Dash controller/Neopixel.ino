void neopixel()
{
  if (RPM>3000) leds.setPixelColor(7, 0, 255, 0); // Set the first pixel to RED
  if (RPM>3500) leds.setPixelColor(6, 0, 255, 0); // Set the second pixel to GREEN
  if (RPM>4000) leds.setPixelColor(5, 0, 255, 0); // Set the third pixel to BLUE
  if (RPM>4250) leds.setPixelColor(4, 0, 255, 0); // Set the third pixel to BLUE
  if (RPM>4500) leds.setPixelColor(3, 255, 255, 0); // Set the third pixel to BLUE
  if (RPM>4750) leds.setPixelColor(2, 255, 255, 0); // Set the third pixel to BLUE
  if (RPM>5000) leds.setPixelColor(1, 255, 0, 0); // Set the third pixel to BLUE
  if (RPM>5250) leds.setPixelColor(0, 255, 0, 0); // Set the third pixel to BLUE 
  if (RPM<3000) leds.setPixelColor(7, 0, 0, 0); // Set the first pixel to RED
  if (RPM<3500) leds.setPixelColor(6, 0, 0, 0); // Set the second pixel to GREEN
  if (RPM<4000) leds.setPixelColor(5, 0, 0, 0); // Set the third pixel to BLUE
  if (RPM<4250) leds.setPixelColor(4, 0, 0, 0); // Set the third pixel to BLUE
  if (RPM<4500) leds.setPixelColor(3, 0, 0, 0); // Set the third pixel to BLUE
  if (RPM<4750) leds.setPixelColor(2, 0, 0, 0); // Set the third pixel to BLUE
  if (RPM<5000) leds.setPixelColor(1, 0, 0, 0); // Set the third pixel to BLUE
  if (RPM<5250) leds.setPixelColor(0, 0, 0, 0); // Set the third pixel to BLUE 
  leds.show(); //Display the colors
}
