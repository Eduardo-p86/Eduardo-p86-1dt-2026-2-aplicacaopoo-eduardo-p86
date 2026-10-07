#ifndef GENIUS_H
#define GENIUS_H
#include <Arduino.h>
#include <Botao.h>

class Genius
{
public:
    Genius();

    int led1 = 19;
    int led2 = 20;
    int led3 = 48;
    int led4 = 36;

    Botao botao1;
    Botao botao2;
    Botao botao3;
    Botao botao4;

    int sequencia[100];
    int respostas[100];

    int tamanho;
    int posicao;

    bool jogando;
    bool esperandoResposta;
    bool proximaRodada;

    void iniciar();
    void atualizar();
    void jogar();

    void resposta1();
    void resposta2();
    void resposta3();
    void resposta4();

    void resposta(int botao);
    void adicionarJogada();
    void mostrarSequencia();
    void acenderLed(int led);
    void verificarResposta();
    void venceu();
    void perdeu();
};

#endif