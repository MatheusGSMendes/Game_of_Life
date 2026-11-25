#include <iostream>
#include "jogo.h"

using namespace std;

void inicializarMundo(Mundo &m){
    m.linhas = 0;
    m.colunas = 0;
    m.geracaoAtual = 0;

    for(int i = 0; i < MAX_LINHAS; i++){
        for(int j = 0; j < MAX_COLUNAS; j++){
            m.matAtual[i][j] = '.';
            m.matProxima[i][j] = '.';
        }
    }
}