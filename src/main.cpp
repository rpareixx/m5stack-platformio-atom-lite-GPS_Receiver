// clang-format off
#include "main.hpp"
// clang-format on

void setup(void) {
    M5_BEGIN();
    Serial.print("Hallo Welt");
}

void loop(void) {
    M5_UPDATE();
}
