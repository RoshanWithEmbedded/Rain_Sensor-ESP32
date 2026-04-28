//rain detection system
//embedded with roshan

#define RAIN_PIN   27
#define LED_PIN    26
#define BUZZER_PIN 25

void setup() {
  Serial.begin(115200);

  pinMode(RAIN_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  int rain = digitalRead(RAIN_PIN);

  if (rain == LOW) {
    Serial.println("Rain Detected ☔");

    digitalWrite(LED_PIN, HIGH);
    digitalWrite(BUZZER_PIN, HIGH);
  }
  else {
    Serial.println("No Rain");

    digitalWrite(LED_PIN, LOW);
    digitalWrite(BUZZER_PIN, LOW);
  }

  delay(500);
}