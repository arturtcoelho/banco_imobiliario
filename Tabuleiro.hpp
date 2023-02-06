#ifndef TABULEIRO
#define TABULEIRO

#include <vector>
#include "Propriedade.hpp"


class Tabuleiro {
    public:
        Tabuleiro();

        std::vector<Propriedade> *propriedades; // lista de predios
    
        const int NUM_POS = 20;
        
    private:
        void criaPropriedades();
};

#endif
