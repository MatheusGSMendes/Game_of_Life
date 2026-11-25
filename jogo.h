#define MAX_LINHAS 100
#define MAX_COLUNAS 100

//definição da estrutura do jogo
struct Mundo {
    char matAtual[MAX_LINHAS][MAX_COLUNAS];
    char matProxima[MAX_LINHAS][MAX_COLUNAS];
    int linhas;
    int colunas;
    int geracaoAtual;
};

//funções
