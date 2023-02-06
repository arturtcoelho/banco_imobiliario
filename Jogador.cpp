#include "Jogador.hpp"

Jogador::Jogador(int id, int pos, int dinheiro): id{id}, pos{pos}, dinheiro{dinheiro}
{

}

int Jogador::getPos()
{
    return this->pos;
}

void Jogador::updatePos(int qtd)
{
    this->pos = qtd;
}
