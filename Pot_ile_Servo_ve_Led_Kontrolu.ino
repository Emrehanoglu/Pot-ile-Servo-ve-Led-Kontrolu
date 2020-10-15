#include<Servo.h>

#define potansiyometre A0
#define led 3

Servo motor;

int deger1 = 0 ;
int deger2 = 0 ;
int deger3 = 0 ;

void setup() {
  pinMode(led,OUTPUT);
  motor.attach(9);
  Serial.begin(9600);
  
  }

void loop() {
  deger1 = analogRead(potansiyometre);
  deger1 = map(deger1,0,1023,0,180);
  motor.write(deger1);

  deger2 = analogRead(potansiyometre);
  deger2 = map(deger2,0,1023,0,255);
  analogWrite(led,deger2);

  deger3 = analogRead(potansiyometre);
  Serial.println(deger3);  
  delay(200);
}
