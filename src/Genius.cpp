#include "Genius.h"

Genius::Genius()
    : botao1(2),
      botao2(42),
      botao3(41),
      botao4(40) {
}

void Genius::iniciar() {
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    pinMode(led4, OUTPUT);

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);

    botao1.iniciar();
    botao2.iniciar();
    botao3.iniciar();
    botao4.iniciar();

    tamanho = 0;
    posicao = 0;
    jogando = false;
    esperandoResposta = false;
    proximaRodada = false;
}

void Genius::atualizar() {
    botao1.atualizar();
    botao2.atualizar();
    botao3.atualizar();
    botao4.atualizar();

    if (!esperandoResposta)
        return;

    if (botao1.pressionou())
        resposta1();
    if (botao2.pressionou())
        resposta2();
    if (botao3.pressionou())
        resposta3();
    if (botao4.pressionou())
        resposta4();
}

void Genius::jogar() {
    if (!jogando) {
        jogando = true;
        tamanho = 0;
        posicao = 0;

        adicionarJogada();
        mostrarSequencia();

        esperandoResposta = true;
    }

    if (proximaRodada) {
        proximaRodada = false;
        posicao = 0;

        adicionarJogada();
        mostrarSequencia();

        esperandoResposta = true;
    }
}

void Genius::resposta1() {
    resposta(0);
}

void Genius::resposta2() {
    resposta(1);
}

void Genius::resposta3() {
    resposta(2);
}

void Genius::resposta4() {
    resposta(3);
}

void Genius::resposta(int botao) {
    if (!esperandoResposta)
        return;

    respostas[posicao] = botao;
    acenderLed(botao);
    verificarResposta();
}

void Genius::verificarResposta() {
    if (respostas[posicao] != sequencia[posicao]) {
        esperandoResposta = false;
        jogando = false;
        tamanho = 0;
        perdeu();
        return;
    }

    posicao++;

    if (posicao >= tamanho) {
        esperandoResposta = false;
        proximaRodada = true;
        venceu();
    }
}

void Genius::adicionarJogada() {
    sequencia[tamanho] = random(0, 4);
    tamanho++;
}

void Genius::mostrarSequencia() {
    for (int i = 0; i < tamanho; i++) {
        acenderLed(sequencia[i]);
        delay(200);
    }
}

void Genius::acenderLed(int led) {
    if (led == 0) {
        digitalWrite(led1, HIGH);
        delay(300);
        digitalWrite(led1, LOW);
    }

    if (led == 1) {
        digitalWrite(led2, HIGH);
        delay(300);
        digitalWrite(led2, LOW);
    }

    if (led == 2) {
        digitalWrite(led3, HIGH);
        delay(300);
        digitalWrite(led3, LOW);
    }

    if (led == 3) {
        digitalWrite(led4, HIGH);
        delay(300);
        digitalWrite(led4, LOW);
    }
}

void Genius::venceu() {
    for (int i = 0; i < 2; i++) {
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, HIGH);

        delay(150);

        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);

        delay(150);
    }
}

void Genius::perdeu() {
    for (int i = 0; i < 3; i++) {
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, HIGH);

        delay(300);

        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);

        delay(300);
    }
}
