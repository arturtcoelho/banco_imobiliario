#ifndef JOGADOR
#define JOGADOR

class Jogador {
    public:

        Jogador(int id, int pos, int dinheiro);

        int id; // id do jogador
        int pos; // posição no tabuleiro
        int dinheiro; // posição no tabuleiro

        int getPos();
        void updatePos(int qtd);
    
};

#endif
