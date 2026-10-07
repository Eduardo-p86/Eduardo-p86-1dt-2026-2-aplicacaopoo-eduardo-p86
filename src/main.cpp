#include <Arduino.h>
#include "Genius.h"

Genius genius;

void setup() {
    randomSeed(analogRead(0));
    genius.iniciar();
}

void loop() {
    genius.atualizar();
    genius.jogar();
}