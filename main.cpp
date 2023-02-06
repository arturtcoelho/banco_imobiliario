#include <iostream>
#include <string>

#include "Jogo.hpp"

int main() {

    Jogo j{2};

    while (true) {
        j.passaTurno();
        std::string wait;
        std::cin >> wait;
    }

    return 0;
}