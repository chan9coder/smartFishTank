#include <OneWire.h>
#include <Servo.h>
#include <DallasTemperature.h>
//input
#define ONE_WIRE_BUS A0//수온센서
#define takpin  A1 //탁도센서

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

float temp(){//온도센서
  float tem=0;
  sensors.requestTemperatures();
  tem=sensors.getTempCByIndex(0);
  return tem;
}
float takdo(){//탁도센서
  int sensorValue = analogRead(takpin); 
  float voltage = sensorValue * (5.0 / 1024.0);
  return voltage;
}
void setup(void)
{ 
  Serial.begin(9600);
}

void loop(){
  Serial.print(temp());
  Serial.print(" ");
  Serial.println(takdo()); 
  delay(300);
}
