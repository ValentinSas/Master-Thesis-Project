#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;/**/

int pos = 0; 
String Byte ; 
int a=0;
int b=1;
int c=2;
int d=3;
int e=4;

const int contact11 = A5;
const int contact12 = A6;
const int contact13 = A7;
const int contact14 = A8;
const int contact15 = A9;
const int contact16 = A10;
const int contact17 = A11;
const int flexPin5 = A4;  //pin A4 to read analog input
const int flexPin4 = A3;  //pin A3 to read analog input
const int flexPin3 = A2;  //pin A2 to read analog input
const int flexPin2 = A1;  //pin A1 to read analog input
const int flexPin1 = A0;  //pin A0 to read analog input

int value1; //save analog or digital value
int value2;
int value3;
int value4;
int value5;
int value6;
int value7;
int value8;
int value9;
int value10;
int value11;
int value12;
int value13;
int value14;
int value15;
int value16;
int value17;
int k=0;
int values[10];

int contact1=22; //digital pin 22 to read input
int contact2=24;
int contact3=26;
int contact4=28;
int contact5=30;
int contact6=32;
int contact7=34;
int contact8=36;
int contact9=38;
int contact10=40;



void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 Serial.println("Servus");
  servo1.attach(2);
  servo2.attach(3);
  servo3.attach(4);
  servo4.attach(5);
  servo5.attach(6);/**/
}

void loop() {
  // ANALOG READ FOR THE STRETCH SENSORS:

  value1 = analogRead(flexPin1);         //Read and save analog value 
  Serial.print("sensor1 raw:");
  Serial.println(value1);               //Print value
  value2 = analogRead(flexPin2);         //Read and save analog value 
  Serial.print("sensor2 raw:");
  Serial.println(value2);               //Print value
  value3 = analogRead(flexPin3);         //Read and save analog value 
  Serial.print("sensor3 raw:");
  Serial.println(value3);
  value4 = analogRead(flexPin4);         //Read and save analog value 
  Serial.print("sensor4 raw:");
  Serial.println(value4);
  value5 = analogRead(flexPin5);         //Read and save analog value 
  Serial.print("sensor5 raw:");
  Serial.println(value5);    
  value1 = map(value1, 0, 1023, 0, 100);//Map value 0-1023 to 0-100 
  value2 = map(value2, 0, 1023, 0, 100);//Map value 0-1023 to 0-100 
  value3 = map(value3, 0, 1023, 0, 100);//Map value 0-1023 to 0-100 
  value4 = map(value4, 0, 1023, 0, 100);//Map value 0-1023 to 0-100 
  value5 = map(value5, 0, 1023, 0, 100);//Map value 0-1023 to 0-100 
  Serial.print("sensor1:");
  Serial.println(value1);
  Serial.print("sensor2:");
  Serial.println(value2);
  Serial.print("sensor3:");
  Serial.println(value3);
  Serial.print("sensor4:");
  Serial.println(value4);  
  Serial.print("sensor5:");
  Serial.println(value5); 
  
  /*value1 = analogRead(contact11);         //Read and save analog value 
  Serial.print("sensor1 raw:");
  Serial.println(value1);               //Print value
  value2 = analogRead(contact12);         //Read and save analog value 
  Serial.print("sensor2 raw:");
  Serial.println(value2);               //Print value
  value3 = analogRead(contact13);         //Read and save analog value 
  Serial.print("sensor3 raw:");
  Serial.println(value3);
  value4 = analogRead(contact14);         //Read and save analog value 
  Serial.print("sensor4 raw:");
  Serial.println(value4);
  value5 = analogRead(contact15);         //Read and save analog value 
  Serial.print("sensor5 raw:");
  Serial.println(value5);
  value6 = analogRead(contact16);         //Read and save analog value 
  Serial.print("sensor6 raw:");
  Serial.println(value6);
  value7 = analogRead(contact17);         //Read and save analog value 
  Serial.print("sensor7 raw:");
  Serial.println(value7);*/

  // DIGITAL READ FOR THE FRONT SENSORS:
  value1=digitalRead(contact1);
  value2=digitalRead(contact2);
  value3=digitalRead(contact3);
  value4=digitalRead(contact4);
  value5=digitalRead(contact5);
  value6=digitalRead(contact6);
  value7=digitalRead(contact7);
  value8=digitalRead(contact8);
  value9=digitalRead(contact9);
  value10=digitalRead(contact10);
  values[1]=value1;
  values[2]=value2;
  values[3]=value3;
  values[4]=value4;
  values[5]=value5;
  values[6]=value6;
  values[7]=value7;
  values[8]=value8;
  values[9]=value9;
  values[10]=value10;
  for (int i=1; i<10; i=i+1)
    { if (values[i]==0)  if(k<=64)  {Serial.print(i);
                                    Serial.println("=Sensors front : LOW");
                                    k++;}
                          else     {Serial.print(i);
                                    Serial.println("=Sensors front : HIGH");
                                    k++;}
      if(k>=64 && values[i]==1)     {Serial.print(i);
                                    Serial.println("=Sensors front : LOW"); 
                                    k=0;}
      }
  // DIGITAL READ FOR THE FRONT SENSORS simplified:
  Serial.print("Sensors front 1:");
  Serial.println(!value1);                      
  value2=digitalRead(contact2);
  Serial.print("Sensors front 2:");
  Serial.println(!value2);
  value3=digitalRead(contact3);
  Serial.print("Sensors front 3:");
  Serial.println(!value3);
  value4=digitalRead(contact4);
  Serial.print("Sensors front 4:");
  Serial.println(!value4);
  value5=digitalRead(contact5);
  Serial.print("Sensors front 5:");
  Serial.println(!value5);
  value6=digitalRead(contact6);
  Serial.print("Sensors front 6:");
  Serial.println(!value6);
  value7=digitalRead(contact7);
  Serial.print("Sensors front 7:");
  Serial.println(!value7);
  value8=digitalRead(contact8);
  Serial.print("Sensors front 8:");
  Serial.println(!value8);
  value9=digitalRead(contact9);
  Serial.print("Sensors front 9:");
  Serial.println(!value9);
  value10=digitalRead(contact10);
  Serial.print("Sensors front 10:");
  Serial.println(!value10);

  //TESTING SERVOS
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

  
  delay(100);            
}
}
