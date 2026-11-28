#include <iostream>
#include "jogo.h"
#include <fstream>
#include <string>

using namespace std;

void inicializarMundoVazio(Mundo &m)
{
    m.linhas = 0;
    m.colunas = 0;
    m.geracaoAtual = 0;

    for (int i = 0; i < MAX_LINHAS; i++)
    {
        for (int j = 0; j < MAX_COLUNAS; j++)
        {
            m.matAtual[i][j] = '.';
            m.matProxima[i][j] = '.';
        }
    }
}

// Carrega a configuração inicial a partir de "mapa_inicial.txt"
bool carregarMapaInicial(const char nomeArquivo[], Mundo &m)
{
    // abrir arquivo
    ifstream arquivo(nomeArquivo);
    // Tratamento de exceção
    if (!arquivo.is_open())
    {
        cout << "Não foi possível abrir o arquivo. \n";
        return false;
    }

    // limpa tudo antes de preencher
    inicializarMundoVazio(m);

    // variável para armazenar o conteúdo da linha lida
    string linha;
    int l = 0;
    // loop para ler todo o arquivo linha por linha
    while (getline(arquivo, linha) && l < MAX_LINHAS)
    {
        //remover o '\r' do final da string
        if(!linha.empty() && linha.back() == '\r'){
            linha.pop_back();
        }

        // linha.length significa quantos caracteres possui naquela linha, o mesmo que dizer quantas colunas possui
        if (linha.length() > m.colunas)
        {
            m.colunas = linha.length();
        }

        // percorrer cada caractere da linha lida
        for (int c = 0; c < linha.length() && c < MAX_COLUNAS; c++)
        {
            m.matAtual[l][c] = linha[c];
        }
        // proxima linha da matriz
        l++;
    }
    m.linhas = l;
    arquivo.close();
    return true;
}

void imprimirMundo(const Mundo &m)
{
    for (int i = 0; i < m.linhas; i++)
    {
        for (int j = 0; j < m.colunas; j++)
        {
            cout << m.matAtual[i][j] << " ";
        }
        cout << endl;
    }
}