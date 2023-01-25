#ifndef JOGO
#define JOGO

#include <Tabuleiro.hpp>
#include <Jogador.hpp>

class Jogo {
    public:
        Tabuleiro tab; // tabuleiro do jogo
        Jogador *jogadores; // lista de jogadores
        int turno; // id do jogador
        int num_jogadores; // n de jogadores
};

#endif
