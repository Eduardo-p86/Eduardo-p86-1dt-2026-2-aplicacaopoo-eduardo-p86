#ifndef _BOTAO_H_
#define _BOTAO_H_
#include <Arduino.h>

class Botao
{
    private:
        uint8_t pinoBotao;
        bool _estadoAtualBotao = HIGH;
        bool _estadoAnteriorBotao = HIGH;

    public:
        Botao(uint8_t pino);
        void iniciar();
        void atualizar();
        bool pressionou();
        bool soltou();


};


#endif