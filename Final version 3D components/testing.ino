#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

int pos = 0;
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
  servo1.attach(2);
  servo2.attach(3);
  servo3.attach(4);
  servo4.attach(5);
  servo5.attach(6);

}

void loop()
{
  if (Serial.available() > 0)
  {
    Byte = Serial.readString();
    int z = Byte.toInt();
    if (z != 0)
      switch (z)
      {
        case 1:
          Serial.print("I received command: ");
          Serial.println(z);
          for (pos = 0; pos <= 20; pos += 1)
          {
            servo1.write(pos);
            delay(20);
            servo2.write(pos);
            delay(20);
            servo3.write(pos);
            delay(20);
            servo4.write(pos);
            delay(20);

          }
          for (pos = 20; pos >= 0; pos -= 1)
          {
            servo1.write(pos);
            delay(20);
            servo2.write(pos);
            delay(20);
            servo3.write(pos);
            delay(20);
            servo4.write(pos);
            delay(20);

          }
          break;

        case 2:
          Serial.print("I received command: ");
          Serial.println(z);
          for (pos = 0; pos <= 20; pos += 1)
          {
            servo1.write(pos);
            delay(20);
            servo4.write(pos);
            delay(20);
          }
          for (pos = 20; pos >= 0; pos -= 1)
          {
            servo1.write(pos);
            delay(20);
            servo4.write(pos);
            delay(20);
          }
          break;

        case 3:
          Serial.print("I received command: ");
          Serial.println(z);
          for (pos = 0; pos <= 20; pos += 1)
          {
            servo2.write(pos);
            delay(20);
            servo3.write(pos);
            delay(20);
          }
          for (pos = 20; pos >= 0; pos -= 1)
          {
            servo2.write(pos);
            delay(20);
            servo3.write(pos);
            delay(20);
          }
          break;

        case 4:
          Serial.print("I received command: ");
          Serial.println(z);
          for (pos = 0; pos <= 20; pos += 1)
          {
            servo1.write(pos);
            delay(20);
          }
          for (pos = 20; pos >= 0; pos -= 1)
          {
            servo1.write(pos);
            delay(20);
          }
          break;

        case 5:
          Serial.print("I received command: ");
          Serial.println(z);
          for (pos = 0; pos <= 60; pos += 1)
          {
            servo5.write(pos);
            delay(40);
          }
          for (pos = 60; pos >= 0; pos -= 1)
          {
            servo5.write(pos);
            delay(40);
          }
          break;

      }

    Serial.print("I did command: ");
    Serial.println(z);

  }
}
