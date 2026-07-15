/*
---------------------------------------------------------
 Project 4 : Edge Computing Smart Home Appliance
 Decode Labs IoT Internship

 Hardware Platform : NodeMCU ESP8266 (Simulation)
 Development Tool  : Arduino IDE
 Circuit Design    : Tinkercad

 Components
 - PIR Motion Sensor
 - MQ-2 Gas Sensor
 - Active Buzzer
 - Red LED
---------------------------------------------------------
*/

#define PIR_PIN D5
#define GAS_SENSOR A0
#define BUZZER D6
#define RED_LED D7

volatile bool motionDetected = false;

void ICACHE_RAM_ATTR detectMotion()
{
  motionDetected = true;
}

void setup()
{
  Serial.begin(115200);

  pinMode(PIR_PIN, INPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(RED_LED, OUTPUT);

  digitalWrite(BUZZER, LOW);
  digitalWrite(RED_LED, LOW);

  attachInterrupt(digitalPinToInterrupt(PIR_PIN), detectMotion, RISING);

  Serial.println("-------------------------------------");
  Serial.println("Edge Computing Smart Home Appliance");
  Serial.println("-------------------------------------");
}

void loop()
{
  int gasValue = analogRead(GAS_SENSOR);

  Serial.print("Gas Level : ");
  Serial.println(gasValue);

  if (gasValue > 700)
  {
    Serial.println("WARNING : Gas Leakage Detected");

    digitalWrite(BUZZER, HIGH);
    digitalWrite(RED_LED, HIGH);

    delay(300);

    digitalWrite(RED_LED, LOW);

    delay(300);

    return;
  }

  digitalWrite(BUZZER, LOW);
  digitalWrite(RED_LED, LOW);

  if (motionDetected)
  {
    Serial.println("Motion Detected");

    delay(2000);

    motionDetected = false;
  }

  delay(500);
}
