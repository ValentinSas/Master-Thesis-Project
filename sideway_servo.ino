#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

int pos = 90; 
String Byte ; 
int a;
int b;
int c;
int d;
int e;
void setup() 
{
  Serial.begin(9600); 
  Serial.println("Servus");
  servo1.attach(11);
  servo2.attach(10);
  servo3.attach(9);
  servo4.attach(6);
  servo5.attach(3);

}

void loop() 
{
  if (Serial.available() > 0)
   {
    Byte = Serial.readString();
    int z= Byte.toInt();
  if (z!=0) 
    switch (z)
     {
      case 1:
      Serial.print("I received command: ");
      Serial.println(z);
      for (pos = 90; pos <= 100; pos += 1)
      { 
       servo1.write(pos);              
       delay(5);
       servo2.write(pos);              
       delay(5);
       servo3.write(pos);              
       delay(5);
       servo4.write(pos);              
       delay(5);
       
      }                       
      for (pos = 100; pos >= 90; pos -= 1) 
      { 
       servo1.write(pos);              
       delay(5);
       servo2.write(pos);              
       delay(5);
       servo3.write(pos);              
       delay(5);
       servo4.write(pos);              
       delay(5);
                              
      }
      break;

      case 2:
      Serial.print("I received command: ");
      Serial.println(z);
      for (pos = 0; pos <= 10; pos += 1)
      { 
       servo1.write(pos);              
       delay(50);
       servo4.write(pos);              
       delay(50);
      }                       
      for (pos = 10; pos >= 0; pos -= 1) 
      { 
       servo1.write(pos);              
       delay(50);
       servo4.write(pos);              
       delay(50);                       
      }
      break;

      case 3:
      Serial.print("I received command: ");
      Serial.println(z);
      for (pos = 0; pos <= 10; pos += 1)
      { 
       servo2.write(pos);              
       delay(50);
       servo3.write(pos);              
       delay(50);
      }                       
      for (pos = 10; pos >= 0; pos -= 1) 
      { 
       servo2.write(pos);              
       delay(50);
       servo3.write(pos);              
       delay(50);                       
      }
      break;

      case 4:
      Serial.print("I received command: ");
      Serial.println(z);
      for (pos = 0; pos <= 10; pos += 1)
      { 
       servo1.write(pos);              
       delay(150);
      }                       
      for (pos = 10; pos >= 0; pos -= 1) 
      { 
       servo1.write(pos);              
       delay(150);                       
      }
      break;

    case 5:
      Serial.print("I received command: ");
      Serial.println(z);
      for (pos = 0; pos <= 60; pos += 1)
      { 
       servo5.write(pos);              
       delay(150);
      }                       
      for (pos = 60; pos >= 0; pos -= 1) 
      { 
       servo5.write(pos);              
       delay(150);                       
      }
      break;

     }
  
    Serial.print("I did command: ");
    Serial.println(z);
  
 }
}
