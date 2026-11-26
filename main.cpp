#include <iostream>
#include "jogo.h"

using namespace std;

int main(){
    //variável do tipo struct Mundo
    Mundo mundoJogo;

    //inicializar os campos vazios
    inicializarMundoVazio(mundoJogo);

    if(carregarMapaInicial("mapa_inicial.txt", mundoJogo)){
        cout << "[SUCESSO] Mapa inicial carregado!" << endl; 
        cout << "Dimensões detectadas: " << mundoJogo.linhas << " linhas x " 
        << mundoJogo.colunas << " colunas." << endl; 

        imprimirMundo(mundoJogo);
    } else { 
        cout << "[FALHA] Não foi possível carregar a simulação." << endl; 
        return 1; // Retorna código de erro }
    }

    return 0;
}