#include <ESP32Servo.h>
#define servopin D0
// DENEYAP KART VE DENEYAP MİNİ İÇİN DE KULLANILABİLİR PİNLERE DİKKATLİ OLUN
 
Servo servo1; 
 
void setup() {
  servo1.attach(servopin); 
}
 
void loop() {
  for (int i = 0; i <= 180; i += 1) { 
    servo1.write(i);              
    delay(15);                       
  }
  for (int j = 180; j >= 0; j -= 1) { 
    servo1.write(j);              
    delay(15);                       
  }
}
