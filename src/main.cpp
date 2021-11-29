/*
  Titre      : SIMULATION FEU DE SIGNALISATION
  Auteur     : Ousseynou Seck
  Date       : 29/11/2021
  Description: Une description du programme
  Version    : 0.0.1
*/






#include <Arduino.h>
//simulation dun feu de signalisasation
//definition des broches
int ledRouge1 = 13;
int ledOrange1 = 12;
int ledVert1 = 11;
int ledRouge2 = 9;
int ledOrange2 = 8;
int ledVert2 = 7;



void setup()
{
  //feu de signakisation 1
  pinMode(ledRouge1, OUTPUT);
  pinMode(ledOrange1, OUTPUT);
  pinMode(ledVert1, OUTPUT);
  
  
  // feu de signalisation 2
  pinMode(ledRouge2, OUTPUT);
  pinMode(ledOrange2, OUTPUT);
  pinMode(ledVert2, OUTPUT);
  
  // Tout eteints sauf les leds rouges
  digitalWrite(ledRouge1, HIGH); 
  digitalWrite(ledRouge2, HIGH);
  digitalWrite(ledVert1, LOW); 
  digitalWrite(ledVert2, LOW);
  digitalWrite(ledOrange1, LOW);
  digitalWrite(ledOrange2, LOW);
    
}

void loop() {
 //premiere sequence
  digitalWrite(ledRouge1, HIGH);
  digitalWrite(ledRouge2, HIGH);
  delay(2000);
  
//deuxieme sequence
  digitalWrite(ledRouge2, LOW);
  digitalWrite(ledVert2, HIGH);  
  delay(3000);
  
//troisieme sequence
  digitalWrite(ledVert2, LOW);
  digitalWrite(ledOrange2, HIGH);
  delay(1000);
  
//quatriemeieme sequence
  digitalWrite(ledOrange2, LOW);
  digitalWrite(ledRouge2, HIGH);
  delay(2000);
  
//cinquieme sequence
  digitalWrite(ledRouge1, LOW); 
  digitalWrite(ledVert1, HIGH);
  delay(3000);
  
//sixieme sequence
  digitalWrite(ledVert1, LOW);
  digitalWrite(ledOrange1, HIGH);
  delay(1000);
  
//septieme sequence
  digitalWrite(ledOrange1, LOW);
  digitalWrite(ledRouge1, HIGH);
  
//FIN
}