#ifndef JOGO
#define JOGO

#include <vector>

#include "Tabuleiro.hpp"
#include "Jogador.hpp"

class Jogo {
    public:

        Jogo(int num_jogadores);

        Tabuleiro tabuleiro; // tabuleiro do jogo
        std::vector<Jogador *> jogadores; // lista de jogadores
        int turno; // id do jogador
        int num_jogadores; // n de jogadores

        void passaTurno();
        int moveJogador(int qtd);
        int rolaDados();
        void atualizaTurno();
};

#endif
