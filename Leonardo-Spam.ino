#include <Keyboard.h>

void spam(const char *phrase, size_t times);

void setup() {
    Keyboard.begin();
    delay(5000);
    //spam("@everyone", 10000);
}

void loop() {}

void spam(const char *phrase, size_t times) {
    for (int i = 0; i < times; i++) {
        Keyboard.print(phrase);
        Keyboard.write(KEY_RETURN);
        delay(300);
    }
}
