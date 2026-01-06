#define BUTTON_PIN 2
#define LED_PIN 9

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);  // internal pull-up enabled
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  if (digitalRead(BUTTON_PIN) == LOW) {
    digitalWrite(LED_PIN, HIGH);  // Button pressed
  } else {
    digitalWrite(LED_PIN, LOW);   // Button released
  }
}
