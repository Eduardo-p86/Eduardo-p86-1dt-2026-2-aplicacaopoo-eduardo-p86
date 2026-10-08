#include <Arduino.h>
#include "Genius.h"

Genius genius;

<<<<<<< HEAD
void setup()
{
    Serial.begin(115200);

    delay(1000);

    genius.iniciar();
}

void loop()
{
    genius.atualizar();
=======
void setup() {
    randomSeed(analogRead(0));
    genius.iniciar();
}

void loop() {
    genius.atualizar();
    genius.jogar();
>>>>>>> 8568338a580329f696bb45a3e99603de181d8747
}