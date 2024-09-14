/*
Este programa lê um número 'n' de times de futebol e suas respectivas informações (nome, pontos, vitórias e gols) 
a partir da entrada padrão. Utiliza o algoritmo de ordenação por seleção (Selection Sort) para ordenar os times 
com base em múltiplos critérios em ordem decrescente.

A estrutura 'timezao' armazena o nome do time, pontos, vitórias e gols. O programa ordena o vetor de times utilizando 
os seguintes critérios de ordenação, todos em ordem decrescente:
1. Pontos
2. Vitórias (como critério de desempate se os pontos forem iguais)
3. Gols (como critério de desempate se os pontos e vitórias forem iguais)

Após a ordenação, o programa exibe os times na tela em ordem decrescente de acordo com os critérios estabelecidos.
*/

#include <iostream>
using namespace std;

struct timezao {
    string nome;
    int pontos;
    int vitorias;
    int gols;
};

int main() {

    timezao vetor[100];
    int menor;
    timezao aux_troca;
    int n;  
    cin >> n;

    // Leitura dos dados dos times
    for (int i = 0; i < n; i++) {
        cin >> vetor[i].nome >> vetor[i].pontos >> vetor[i].vitorias >> vetor[i].gols;
    }

    // Algoritmo de ordenação por seleção (Selection Sort)
    for (int i = 0; i < n - 1; i++) {
        menor = i;
        for (int j = i + 1; j < n; j++){
            // Comparação para encontrar o menor elemento com base nos critérios
            if ((vetor[j].pontos > vetor[menor].pontos) || 
                (vetor[j].pontos == vetor[menor].pontos && vetor[j].vitorias > vetor[menor].vitorias) ||
                (vetor[j].pontos == vetor[menor].pontos && vetor[j].vitorias == vetor[menor].vitorias && vetor[j].gols > vetor[menor].gols)){
                menor = j;
            }
        }

        // Troca do menor elemento encontrado com o elemento na posição atual
        aux_troca = vetor[i];
        vetor[i] = vetor[menor];
        vetor[menor] = aux_troca;
    }

    // Exibição dos resultados ordenados
    for (int i = 0; i < n; i++) {
        cout << vetor[i].nome << " " << vetor[i].pontos << " " << vetor[i].vitorias << " " << vetor[i].gols << endl;
    }

    return 0;
}
