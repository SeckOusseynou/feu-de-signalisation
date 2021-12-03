/*
  Titre      : Simulation Feu De Sgnalisation
  Auteur     : Ousseynou Seck
  Date       : 29/11/2021
  Description: Une description du programme
  Version    : 0.0.1
*/




//simulation dun feu de signalisasation

#include <Arduino.h>



//Prototype de la fonction ledClgnotant
void ledClignotant(int led);

//definition des broches

int ledRouge1 = 13;
int ledOrange1 = 12;
int ledVert1 = 11;
int ledRouge2 = 9;
int ledOrange2 = 8;
int ledVert2 = 7;
int ledRouge3 = 10;
int ledOrange3 = 6;
int ledVert3 = 5;
int ledRouge4 = 2;
int ledOrange4 = 3;
int ledVert4 = 4;
int led;


void setup()
{
  pinMode(led, OUTPUT);
  //feu de signakisation 1
  pinMode(ledRouge1, OUTPUT);
  pinMode(ledOrange1, OUTPUT);
  pinMode(ledVert1, OUTPUT);
  
  
  // feu de signalisation 2
  pinMode(ledRouge2, OUTPUT);
  pinMode(ledOrange2, OUTPUT);
  pinMode(ledVert2, OUTPUT);
  
  //feu de signalisation 3
  pinMode(ledRouge3, OUTPUT);
  pinMode(ledOrange3, OUTPUT);
  pinMode(ledVert3, OUTPUT);
  
  //feu de signalisation
  pinMode(ledRouge4, OUTPUT);
  pinMode(ledOrange4, OUTPUT);
  pinMode(ledVert4, OUTPUT);
  
  
  // Tout eteints sauf les leds rouges
  digitalWrite(ledRouge1, HIGH); 
  digitalWrite(ledRouge2, HIGH);
  digitalWrite(ledVert1, LOW); 
  digitalWrite(ledVert2, LOW);
  digitalWrite(ledOrange1, LOW);
  digitalWrite(ledOrange2, LOW);
  digitalWrite(ledRouge3, HIGH); 
  digitalWrite(ledRouge4, HIGH);
  digitalWrite(ledVert3, LOW); 
  digitalWrite(ledVert4, LOW);
  digitalWrite(ledOrange3, LOW);
  digitalWrite(ledOrange4, LOW);
    
}

void loop()
{
  //premiere sequence:les rouges de tous les feux sont allumes
  digitalWrite(ledRouge1, HIGH);
  digitalWrite(ledRouge2, HIGH);
  digitalWrite(ledRouge3, HIGH);
  digitalWrite(ledRouge4, HIGH);
  delay(3000);                 //delai de 3 secondes
  
//deuxieme sequence
  digitalWrite(ledRouge2, LOW);// rouge du 2e feu eteint


  // Appel de la fonction
  ledClignotant(ledVert2);    //clignotement du vert du 2e feu pour indiquer une permission de tourner
  ledClignotant(ledVert2);
  delay(500);                 //delai de 500 millisecondes


  digitalWrite(ledVert2, HIGH);// vert du 2e feu allume
  digitalWrite(ledRouge3, LOW);// rouge du 3e feu eteint
  ledClignotant(ledVert3);     //indication d'une permission de tourner pour le 3e feu
  ledClignotant(ledVert3);
  delay(500);                  //delai de de 500 millisecondes
  
  
  digitalWrite(ledVert3, HIGH); //vert du feu 3 allume
  delay(3000);
  
//troisieme sequence
  digitalWrite(ledVert2, LOW); //vert du feu2 eteint
  digitalWrite(ledOrange2, HIGH); // orange du feu2 allume
  digitalWrite(ledVert3, LOW); // vert du feu 3 eteint
  digitalWrite(ledOrange3, HIGH);// orange du feu3 allume
  delay(1000);   // delai d'une seconde
  
//quatriemeieme sequence
  digitalWrite(ledOrange2, LOW); //orange du feu 2 eteint
  digitalWrite(ledRouge2, HIGH); // rouge du feu 2 allume
  digitalWrite(ledOrange3, LOW); //orange du feu 3 eteint
  digitalWrite(ledRouge3, HIGH); //rouge du feu 3 allume
  delay(2000);                   // delai de deux secondes
  
//cinquieme sequence
  digitalWrite(ledRouge1, LOW); // rouge feu 1 eteint
  ledClignotant(ledVert1);
  ledClignotant(ledVert1);
  delay(500);                   // delai de 500 millisecondes


  digitalWrite(ledVert1, HIGH);  // vert feu1 allume
  digitalWrite(ledRouge4, LOW); // rouge feu4 eteint
  ledClignotant(ledVert4);      
  ledClignotant(ledVert4);
  delay(500);                   // delai de 500 millisecondes


  digitalWrite(ledVert4, HIGH);  //vert du feu 4 allume
  delay(3000);                  //delai de 3 secondes
  
//sixieme sequence
  digitalWrite(ledVert1, LOW);    //vert du premier feu eteint
  digitalWrite(ledOrange1, HIGH); //orange du premier feu allume
  digitalWrite(ledVert4, LOW);    //vert du feu 4 eteint
  digitalWrite(ledOrange4, HIGH); //orange du feu 4 allume
  delay(1000);
  
//septieme sequence
  digitalWrite(ledOrange1, LOW);    //orange du premier feu eteint
  digitalWrite(ledRouge1, HIGH);   //rouge du premier feu allume
  digitalWrite(ledOrange4, LOW);  //orange du feu 4 eteint
  digitalWrite(ledRouge4, HIGH); //rouge du feu 4 allume
  
  
//FIN
  

  
  
}
//Declaration de notre fonction
void ledClignotant(){ 
  

  digitalWrite(led, HIGH);     // allumer la led
  delay(1000);                // attendre une seconde
  digitalWrite(led, LOW);    // éteindre la led
  delay(1000);              // attendre une seconde
              
}
  