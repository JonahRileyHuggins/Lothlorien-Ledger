#include <LiquidCrystal.h>
#include "parser.h"

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

double answer;

// input buffer
char inputBuf[64];
uint8_t idx = 0;

void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);
  lcd.clear();
}

void loop() {
  while (Serial.available() > 0) {
    lcd.setCursor(0, 0);
    char c = Serial.read();
    lcd.write(c);

    // newline = evaluate expression
    if (c == '\n' || c == '\r') {
      if (idx == 0) return;  // ignore empty lines

      inputBuf[idx] = '\0';   // terminate C-string

      double result = parser(inputBuf);

      lcd.clear();
      lcd.setCursor(0, 1);
      if (isnan(result)) {
        lcd.write("ERROR");
      } else {
        char out[16];
        dtostrf(result, 0, 6, out);  // adjust width/precision as needed
        lcd.write(out);
      }

      idx = 0;  // reset buffer
      return;
    }

    // normal character: show + store
    if (idx < sizeof(inputBuf) - 1) {
      lcd.write(c);
      inputBuf[idx++] = c;
    }
  }
}

