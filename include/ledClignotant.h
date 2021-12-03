
#include <Arduino.h>


void ledClignotant(){

  digitalWrite(led, HIGH);   // allumer la led
  delay(1000);              // attendre une seconde
  digitalWrite(led, LOW);    // éteindre la led
  delay(1000); // attendre une seconde
              
}