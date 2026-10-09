#include "Botao.h"

Botao::Botao(uint8_t pino)
{
    pinoBotao = pino;
}

void Botao::iniciar()
{
    pinMode(pinoBotao, INPUT_PULLUP);
    _estadoAtualBotao = digitalRead(pinoBotao);
    _estadoAnteriorBotao = _estadoAtualBotao;
    _ultimoMundaca_ms = millis();
    _presssinou = false;
    _soltou = false;
}

void Botao::atualizar()
{
    bool leitura = digitalRead(pinoBotao);
    _presssinou = false;
    _soltou = false;

    if (leitura != _estadoAnteriorBotao)
    {
        _ultimoMundaca_ms = millis();
        _estadoAnteriorBotao = leitura;
    }

    if ((millis() - _ultimoMundaca_ms) > _tempoDebounce_ms)
    {
        if (leitura != _estadoAtualBotao)
        {
            _estadoAtualBotao = leitura;

            if (_estadoAtualBotao == LOW)
            {
                _presssinou = true;
            }
            else
            {
                _soltou = true;
            }
        }
    }
}

bool Botao::pressionou()
{
    return _presssinou;
}

bool Botao::soltou()
{
    return _soltou;
}

uint32_t Botao::tempoDecorrido()
{
    return millis() - _ultimoMundaca_ms;
}

void Botao::setTempoDebounce(int tempoDebounce_ms)
{
    _tempoDebounce_ms = tempoDebounce_ms;
}
