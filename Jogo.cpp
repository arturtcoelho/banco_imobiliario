#include <random>
#include <iostream>
#include "Jogo.hpp"

Jogo::Jogo(int num_jogadores):num_jogadores{num_jogadores}
{
    this->turno = 0;
    this->tabuleiro = Tabuleiro();
    for(int i; i < num_jogadores; ++i) {
        this->jogadores.push_back(new Jogador{i, 0, 1500});
    }
}

void Jogo::passaTurno()
{
    int dados = this->rolaDados();
    int casa = this->jogadores[this->turno].getPos();
    casa = (casa + dados) % Tabuleiro::NUM_POS;

    std::cout << turno << " " << casa << "\n";

    this->atualizaTurno();
}

int Jogo::rolaDados()
{
    std::srand((unsigned)time(0));

    int roll1{0}, roll2{0}, total{0};

    do {
        roll1 = std::rand() % 6 + 1;
        roll2 = std::rand() % 6 + 1;
        total += roll1+roll2;
    } while (roll1==roll2);
    
    return total;
}

void Jogo::atualizaTurno()
{
    this->turno = (this->turno + 1)%this->num_jogadores;
}
