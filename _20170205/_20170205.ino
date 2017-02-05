
#include <OneWire.h>
#include <DallasTemperature.h>

// Data wire is connected to the Arduino digital pin 2
#define temp_sensor 2
#define heater 7
int temp;
// Setup a oneWire instance to communicate with any OneWire devices
OneWire oneWire(temp_sensor);

// Pass our oneWire reference to Dallas Temperature sensor 
DallasTemperature sensors(&oneWire);

void setup(void)
{

pinMode(heater, OUTPUT);
  
  // Start serial communication for debugging purposes
  Serial.begin(9600);
  // Start up the library
  sensors.begin();
}


void loop(void){ 
  // Call sensors.requestTemperatures() to issue a global temperature and Requests to all devices on the bus
  sensors.requestTemperatures(); 
  
  Serial.print("Celsius temperature: ");
  Serial.println(sensors.getTempCByIndex(0));
  temp = sensors.getTempCByIndex(0); 
  delay(10000);

  if (temp <= 16){
  
  digitalWrite(heater, HIGH);

  }
  
  if (temp >= 20){
  
  digitalWrite(heater, LOW);
  }

}
