/******************************************************
 Project 3 : Cloud Connected Security Node
 Decode Labs IoT Internship

 Hardware:
 • ESP32
 • HC-SR04 Ultrasonic Sensor
 • Blynk IoT Dashboard

******************************************************/

#define BLYNK_TEMPLATE_ID "YOUR_TEMPLATE_ID"
#define BLYNK_TEMPLATE_NAME "Ultrasonic Project"
#define BLYNK_AUTH_TOKEN "YOUR_AUTH_TOKEN"

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "YOUR_WIFI_NAME";
char pass[] = "YOUR_WIFI_PASSWORD";

#define TRIG_PIN 5
#define ECHO_PIN 18

BlynkTimer timer;

float getDistance()
{
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);

  digitalWrite(TRIG_PIN, LOW);

  long duration = pulseIn(ECHO_PIN, HIGH);

  float distance = duration * 0.0343 / 2.0;

  return distance;
}

void sendSensor()
{
  float distance = getDistance();

  Serial.print("Distance : ");
  Serial.print(distance);
  Serial.println(" cm");

  // Send to Blynk Virtual Pin V0
  Blynk.virtualWrite(V0, distance);
}

void setup()
{
  Serial.begin(115200);

  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

  timer.setInterval(1000L, sendSensor);
}

void loop()
{
  Blynk.run();
  timer.run();
}
