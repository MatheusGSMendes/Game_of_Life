#define MAX_LINHAS 100
#define MAX_COLUNAS 100
#include <fstream>


//definição da estrutura do jogo
struct Mundo {
    char matAtual[MAX_LINHAS][MAX_COLUNAS];
    char matProxima[MAX_LINHAS][MAX_COLUNAS];
    int linhas;
    int colunas;
    int geracaoAtual;
};

//funções
void inicializarMundoVazio(Mundo &m);
bool carregarMapaInicial(const char nomeArquivo[], Mundo &m);
void imprimirMundo(const Mundo &m);

