#include <Arduino.h>
#include "Genius.h"

Genius genius;

void setup()
{
    Serial.begin(115200);

    delay(1000);

    genius.iniciar();
}

void loop()
{
    genius.atualizar();
}