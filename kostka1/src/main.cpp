#include <Arduino.h>

int led_1 = 2;
int led_2 = 3;
int led_3 = 4;
int led_4 = 5;
int led_5 = 6;
int led_6 = 7;
int led_7 = 8;
int button = 12;

int cislo = 0;


void setup() {
  Serial.begin(9600);
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
  pinMode(led_4, OUTPUT);
  pinMode(led_5, OUTPUT);
  pinMode(led_6, OUTPUT);
  pinMode(led_7, OUTPUT);
  pinMode(button, INPUT_PULLUP); //TLAČÍTKO

  digitalWrite(led_1, LOW);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, LOW);
  digitalWrite(led_4, LOW);
  digitalWrite(led_5, LOW);
  digitalWrite(led_6, LOW);
  digitalWrite(led_7, LOW);
}

void loop() {
  if(digitalRead(button) == 0){
    delay(3000);
  digitalWrite(led_1, LOW);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, LOW);
  digitalWrite(led_4, LOW);
  digitalWrite(led_5, LOW);
  digitalWrite(led_6, LOW);
  digitalWrite(led_7, LOW);
    cislo = random(1,7);
   
  }
  else{
    if (cislo == 1){
  digitalWrite(led_1, LOW);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, LOW);
  digitalWrite(led_4, HIGH);
  digitalWrite(led_5, LOW);
  digitalWrite(led_6, LOW);
  digitalWrite(led_7, LOW);
    }
    if (cislo == 2){
  digitalWrite(led_1, LOW);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, HIGH);
  digitalWrite(led_4, LOW);
  digitalWrite(led_5, LOW);
  digitalWrite(led_6, LOW);
  digitalWrite(led_7, HIGH);
    }
    if (cislo == 3){
  digitalWrite(led_1, LOW);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, HIGH);
  digitalWrite(led_4, HIGH);
  digitalWrite(led_5, LOW);
  digitalWrite(led_6, LOW);
  digitalWrite(led_7, HIGH);
    }
    if (cislo == 4){ 
  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, HIGH);
  digitalWrite(led_4, LOW);
  digitalWrite(led_5, HIGH);
  digitalWrite(led_6, LOW);
  digitalWrite(led_7, HIGH);
    }
    if (cislo == 5){
  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, HIGH);
  digitalWrite(led_4, HIGH);
  digitalWrite(led_5, HIGH);
  digitalWrite(led_6, LOW);
  digitalWrite(led_7, HIGH);
    }
    if (cislo == 6){
  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, HIGH);
  digitalWrite(led_4, LOW);
  digitalWrite(led_5, HIGH);
  digitalWrite(led_6, HIGH);
  digitalWrite(led_7, HIGH);
  }
}
}
