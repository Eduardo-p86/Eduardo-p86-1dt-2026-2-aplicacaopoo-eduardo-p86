#ifndef _BOTAO_H_
#define _BOTAO_H_
#include <Arduino.h>

class Botao
{
    private:
        uint8_t pinoBotao;
        bool _estadoAtualBotao = HIGH;
        bool _estadoAnteriorBotao = HIGH;
        bool _presssinou = false;
        bool _soltou = false;
        int _ultimoMundaca_ms = 0;
        int _tempoDebounce_ms = 20;
        int _estadoUltimaAcao = HIGH;
        uint32_t tempoDecorrido();
    public:
        Botao(uint8_t pino);
        void iniciar();
        void atualizar();
        bool pressionou();
        bool soltou();


};


#endif