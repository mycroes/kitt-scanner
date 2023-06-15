#include <Arduino.h>

int pins[] = {28, 27, 26, 22, 21, 20, 19, 18};
const int PIN_CNT = 8;

void setup() {
  for (int i = 0; i < PIN_CNT; i++) {
    pinMode(pins[i], OUTPUT);
  }
}

int step = 0;

void loop() {
  if (step == 0) {
    digitalWrite(pins[0], HIGH);
    digitalWrite(pins[1], LOW);
  } else if (step < 8) {
    if (step > 1) {
      digitalWrite(pins[step - 2], LOW);
    }
    digitalWrite(pins[step], HIGH);
  } else if (step == 8) {
    digitalWrite(pins[6], LOW);
  } else if (step < 16) {
    digitalWrite(pins[15 - step], HIGH);
    if (step >= 10) {
      digitalWrite(pins[15 - step + 2], LOW);
    }
  }

  delay(75);
  step += 1;
  if (step == 16) step = 0;
}
