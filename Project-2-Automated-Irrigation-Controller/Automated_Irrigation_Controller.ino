/*
 Project 2 : Automated Irrigation Controller
 Decode Labs IoT Internship
*/

const int soilSensor = A0;
const int relayPin = 8;

int moistureValue;

void setup()
{
  Serial.begin(9600);

  pinMode(relayPin, OUTPUT);

  // Pump OFF initially
  digitalWrite(relayPin, LOW);

  Serial.println("=================================");
  Serial.println("Automated Irrigation Controller");
  Serial.println("=================================");
}

void loop()
{
  moistureValue = analogRead(soilSensor);

  Serial.print("Soil Moisture Value : ");
  Serial.println(moistureValue);

  if (moistureValue > 600)
  {
    Serial.println("Soil is Dry");
    Serial.println("Pump ON");
    digitalWrite(relayPin, HIGH);
  }
  else
  {
    Serial.println("Soil is Wet");
    Serial.println("Pump OFF");
    digitalWrite(relayPin, LOW);
  }

  Serial.println("---------------------------------");

  delay(2000);
}
