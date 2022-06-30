#include <Wire.h>


void setup() 
{
 Wire.begin();
}

void loop()
{
  int angulo = analogRead (0);
  if (angulo >=54 && angulo<854){ 
  angulo = map(angulo, 54, 854, 90, 112.5);
  }
  if (angulo >=854 && angulo<935){ 
  angulo = map(angulo, 554, 935, 112.5, 135);
  }
  if (angulo >=935 && angulo<963){ 
  angulo = map(angulo, 935, 963, 135, 157.5);
  }
  if (angulo >=963 && angulo<974){ 
  angulo = map(angulo, 963, 974, 157.5,180);
  }
 Wire.beginTransmission(10); 
  Wire.write(angulo);
  Wire.endTransmission(); 
}
  