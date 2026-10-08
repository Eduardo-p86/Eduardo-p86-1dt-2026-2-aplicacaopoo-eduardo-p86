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
}

void Botao::atualizar()
{
    _presssinou = false;
    _soltou = false;

    _estadoAtualBotao = digitalRead(pinoBotao);
    if (_estadoAtualBotao != _estadoAnteriorBotao)
    {
        _ultimoMundaca_ms = millis();
        _estadoAnteriorBotao = _estadoAtualBotao;
        return;
    }
    if (tempoDecorrido() < _tempoDebounce_ms)
    {
        return;
    }
    if (_estadoUltimaAcao == _estadoAtualBotao)
    {
        return;
    }
    _estadoUltimaAcao = _estadoAtualBotao;

    if (estadoAtualBotao == LOW)
    {
        _presssinou = true;
    }
    else
    {
        _soltou = true; 
    }
    // _presssinou = false;
    // _soltou = false;
    // _estadoAtualBotao = digitalRead(pinoBotao);
    // if (_estadoAtualBotao != _estadoAnteriorBotao)
    // {
    //     _ultimoMundaca_ms = millis();
    // }
    // else if (tempoDecorrido() - _ultimoMundaca_ms > _tempoDebounce_ms)
    // {
    //     if(_estadoUltimaAcao != _estadoAtualBotao)
    //     {
    //         _estadoUltimaAcao = _estadoAtualBotao;
    //         if (_estadoAtualBotao == LOW)
    //         {
    //             _presssinou = true;
    //         }
    //         else
    //         {
    //             _soltou = true;
    //         }
    //     }
    // }
    // _estadoAnteriorBotao = _estadoAtualBotao;
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
    return millis();
}