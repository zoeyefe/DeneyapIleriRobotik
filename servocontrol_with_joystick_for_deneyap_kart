#include <ESP32Servo.h>
// Pin Tanımlamaları
#define sagbacak D15
#define solbacak D13
#define catchme D14
#define SW_pin D12
Servo servo1;
Servo servo2;   
Servo servo3;   
int ykonum;  
int y2konum;
int servoderece=180;
int servoderece2=180;
int servoderece3=180;
int Dig_Val;

void setup() {
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
  pinMode(SW_pin, INPUT_PULLUP);
  digitalWrite(SW_pin, LOW);
  servo1.attach(solbacak);
  servo2.attach(sagbacak);
  servo1.write(servoderece);  
  servo2.write(servoderece2);  
  servo2.write(servoderece3);                                                                      
}
 
void loop() {
  Dig_Val = digitalRead(SW_pin);
  ykonum = analogRead(A2);
  y2konum = analogRead(A3);
  if (Dig_Val == HIGH){
    servoderece3 = servoderece3+1;
    delay(10);
  }

  if(ykonum<1000 && servoderece>0){
    servoderece = servoderece-1;
  } else if (ykonum>3500 && servoderece<180){
    servoderece = servoderece+1;
  } else if(y2konum<1000 && servoderece2>0){
    servoderece2 = servoderece2-1;
  } else if (y2konum>3500 && servoderece2<180){
    servoderece2 = servoderece2+1;
  }
  servo1.write(servoderece);
  servo2.write(servoderece2);
  delay(10);
}
