/*
Este programa lê um número 'n' de valores reais e utiliza o algoritmo de ordenação por inserção 
(Insertion Sort) para ordenar esses valores em ordem crescente.

A estrutura do programa é a seguinte:
1. Leitura do número 'n' de valores reais e armazenamento desses valores em um vetor.
2. Aplicação do algoritmo de ordenação por inserção para ordenar o vetor de valores reais.
3. Exibição dos valores ordenados.

O algoritmo de ordenação por inserção funciona da seguinte maneira:
- Começa na segunda posição do vetor e compara o elemento com os anteriores.
- Move os elementos maiores para a direita até encontrar a posição correta para o elemento atual.
- Insere o elemento na posição correta e continua para o próximo elemento até o final do vetor.
*/

#include <iostream> 
using namespace std;

int main (){

    double vetor[100];
    int n;
    cin >> n;

    // Leitura dos valores reais para o vetor
    for (int i = 0; i < n; i++){
        cin >> vetor[i];
    }

    double pivo;  // Correção do tipo de pivo para double
    int j;

    // Algoritmo de ordenação por inserção (Insertion Sort)
    for (int i = 1; i < n; i++){
        pivo = vetor[i];
        j = i - 1;

        // Movendo os elementos maiores para a direita
        while ((j >= 0) && (pivo < vetor[j])){
            vetor[j + 1] = vetor[j];
            j--;
        }

        // Inserindo o pivo na posição correta
        vetor[j + 1] = pivo;
    }

    // Exibição dos valores ordenados
    for (int i = 0; i < n; i++){
        cout << vetor[i] << endl;
    }

    return 0;
}
