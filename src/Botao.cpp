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
    _estadoAnteriorBotao = _estadoAtualBotao;
    _estadoAtualBotao = digitalRead(pinoBotao);
}
bool Botao::pressionou()
{
    return (_estadoAtualBotao == LOW && _estadoAnteriorBotao == HIGH);
}
bool Botao::soltou()
{
    return (_estadoAtualBotao == HIGH && _estadoAnteriorBotao == LOW);
}