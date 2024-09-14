/*
Este programa implementa a ordenação de um vetor de times de futebol utilizando o algoritmo Shell Sort,
com gaps baseados na sequência de Ciura. Cada time é representado por uma estrutura chamada 'timezao', 
que contém o nome do time, pontos, vitórias e gols.

A entrada consiste no número de times e os respectivos dados de cada time. O programa então ordena os times 
com base nos pontos (prioridade), vitórias (desempate) e gols (segundo critério de desempate), de forma decrescente.

Este método utiliza o algoritmo de ordenação Shell Sort com a sequência de gaps de Ciura 
para ordenar o vetor. A ordenação segue os critérios de pontos, vitórias e gols, todos 
de forma decrescente. Após a ordenação, os times são exibidos na tela em ordem, 
começando pelo time com melhor desempenho.
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
    timezao pivo;
    int j;
    int n;  
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> vetor[i].nome >> vetor[i].pontos >> vetor[i].vitorias >> vetor[i].gols;
    }

    int gaps[6] = {1, 4, 10, 23, 57, 132};
    int pos_gap = 5;

    while (gaps[pos_gap] > n){
        pos_gap --;

    } 

    while (pos_gap >= 0) {

        int gap = gaps[pos_gap];

    for (int i = gap; i < n; i++) {
        pivo = vetor[i];
        j = i;

        while ((j >= gap )&& 
              ((pivo.pontos > vetor[j - gap].pontos) || 
              (pivo.pontos == vetor[j - gap].pontos && pivo.vitorias > vetor[j - gap].vitorias) ||
              (pivo.pontos == vetor[j - gap].pontos && pivo.vitorias == vetor[j - gap].vitorias && pivo.gols > vetor[j - gap].gols))) {
               vetor[j] = vetor[j - gap];
               j = j - gap;
        }
    
        vetor[j] = pivo;
    }

    pos_gap--;

    }
    for (int i = 0; i < n; i++) {
        cout << vetor[i].nome << " " << vetor[i].pontos << " " << vetor[i].vitorias << " " << vetor[i].gols << endl;
    }

    return 0;
}
