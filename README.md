# 🎮 Genius — Jogo de Memória com ESP32

Projeto desenvolvido em **C++** para implementação do jogo **Genius**, utilizando **ESP32** e componentes eletrônicos.

O objetivo do projeto é reproduzir a dinâmica clássica do Genius: o sistema apresenta uma sequência de sinais e o jogador deve repetir a sequência corretamente. A cada rodada, a sequência aumenta de tamanho, tornando o desafio progressivamente maior.

## 📌 Sobre o projeto

O projeto foi desenvolvido como parte da disciplina de **Aplicação Orientada a Objetos (POO)**.

A implementação utiliza conceitos de programação orientada a objetos para organizar a lógica do jogo e facilitar sua manutenção e evolução.

### 🧠 Funcionamento

De forma geral, o jogo funciona da seguinte maneira:

1. O sistema inicia uma sequência.
2. Os sinais são apresentados ao jogador.
3. O jogador precisa repetir a sequência na mesma ordem.
4. Se acertar, uma nova rodada é iniciada com uma sequência maior.
5. Se errar, a rodada é encerrada ou reiniciada conforme a lógica implementada.

## 🛠️ Tecnologias utilizadas

* **C++**
* **ESP32**
* **PlatformIO**
* Programação Orientada a Objetos
* Git e GitHub

## 📁 Estrutura do projeto

```text
1dt-2026-2-aplicacaopoo-eduardo-p86/
│
├── lib/
│   └── Genius.h
│
├── src/
│   ├── Genius.cpp
│   └── main.cpp
│
├── platformio.ini
└── README.md
```

## 🎯 Objetivos

* Aplicar conceitos de **Programação Orientada a Objetos**;
* Desenvolver um jogo utilizando **microcontrolador ESP32**;
* Trabalhar com entrada e saída de dados através de componentes eletrônicos;
* Utilizar classes e métodos para organizar o código;
* Praticar versionamento utilizando **Git e GitHub**.

## ▶️ Como executar

### 1. Pré-requisitos

É necessário ter instalado:

* [PlatformIO](https://platformio.org/)
* Visual Studio Code
* Driver/ambiente necessário para comunicação com o ESP32

### 2. Clonar o projeto

```bash
git clone https://github.com/Eduardo-p86/1dt-2026-2-aplicacaopoo-eduardo-p86.git
```

Entre na pasta:

```bash
cd 1dt-2026-2-aplicacaopoo-eduardo-p86
```

### 3. Compilar

No PlatformIO, execute:

```bash
pio run
```

### 4. Enviar para o ESP32

Conecte o ESP32 ao computador e execute:

```bash
pio run --target upload
```

## 🧩 Organização do código

### `Genius.h`

Define a estrutura da classe responsável pela lógica principal do jogo.

### `Genius.cpp`

Contém a implementação dos métodos e regras do jogo.

### `main.cpp`

Responsável pela inicialização do projeto e execução da aplicação no ESP32.

## 📚 Conceitos de POO utilizados

O projeto busca aplicar conceitos como:

* **Classes**
* **Objetos**
* **Encapsulamento**
* **Métodos**
* **Atributos**
* Organização do código em arquivos `.h` e `.cpp`

## 🚀 Possíveis melhorias

Algumas funcionalidades que podem ser adicionadas futuramente:

* Sistema de pontuação;
* Diferentes níveis de dificuldade;
* Ranking de melhores pontuações;
* Efeitos sonoros;
* Interface mais interativa;
* Salvamento da pontuação;
* Novos modos de jogo.

## 👨‍💻 Autor

**Eduardo-p86**

Projeto acadêmico desenvolvido para aplicação dos conhecimentos de **Programação Orientada a Objetos e desenvolvimento com ESP32**.

---

⭐ Projeto desenvolvido com C++ e ESP32.
