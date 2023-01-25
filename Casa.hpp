#ifndef CASA
#define CASA

#include <Jogador.hpp>

class Casa : public Posicao {
    public:
        int valor; // custo
        int aluguel // custo
        Jogador proprietario; // proprietario da casa
};

#endif
