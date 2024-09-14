/*
Este programa lê um número 'n' de políticos e suas respectivas informações (nome, partido e valor) 
a partir da entrada padrão. Utiliza o algoritmo Shell Sort com uma sequência de gaps para ordenar os políticos 
com base no valor em ordem decrescente. Após a ordenação, o programa grava os nomes dos políticos ordenados 
em um arquivo chamado "relacao_corruptos.txt".

A estrutura 'politico' armazena o nome, partido e valor de cada político. O programa aloca dinamicamente um vetor 
de tamanho 'n' para armazenar essas informações. Após ordenar os políticos com base no valor utilizando Shell Sort, 
o programa escreve os nomes no arquivo e libera a memória alocada.

O método de ordenação é o Shell Sort, que utiliza uma sequência de gaps para melhorar a eficiência da ordenação 
em comparação com o método de ordenação por inserção direta. A ordenação é realizada em ordem decrescente 
com base no campo 'valor'.
*/

#include <iostream>
#include <fstream>

using namespace std;

struct politico{
    string nome;
    string partido;
    double valor;
};

int main (){

    int n;
    cin >> n;

    politico* vetor = new politico[n];

    for (int i = 0; i < n; i++){
        cin >> vetor[i].nome >> vetor[i].partido >> vetor[i].valor;
    }

    int gaps[9] = {1, 4, 10, 23, 57, 132, 301, 701, 1750};
    int pos_gap = 8;

    // Ajusta a posição do gap para o valor de n
    while (gaps[pos_gap] > n){
        pos_gap--;
    }

    int j;
    politico pivo;

    // Algoritmo Shell Sort
    while (pos_gap >= 0){
        int gap = gaps[pos_gap];
        
        for (int i = gap; i < n; i++){
            pivo = vetor[i];
            j = i;

            while ((j >= gap) && (pivo.valor > vetor[j - gap].valor)){
                vetor[j] = vetor[j - gap];
                j = j - gap;
            }
            vetor[j] = pivo;
        }

        pos_gap--;
    }

    // Grava o resultado no arquivo
    ofstream arquivo("relacao_corruptos.txt");

    for (int i = 0; i < n; i++){
        arquivo << vetor[i].nome << endl;
    }

    arquivo.close();
    delete[] vetor;
    return 0;
}
