#include <Wire.h>
#include <Servo.h>
Servo persiana;

void setup()
{
persiana.attach(6);
  Wire.begin(10);
  Wire.onReceive(recebe);
}

void loop()
{
  delay(1000); 
	}
void recebe (int numBytes)
{ 
	if (Wire.available())
	{
  		int angulo = Wire.read();
  		persiana.write(angulo);
	}
}