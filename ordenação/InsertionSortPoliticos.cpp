/*
Este programa lê dados de um arquivo chamado "relacao_desvios.txt" que contém informações sobre políticos,
incluindo nome, partido e valor associado a cada político. O objetivo é ordenar os políticos com base no 
valor em ordem decrescente utilizando o algoritmo de ordenação por inserção.

A estrutura 'politico' armazena o nome, partido e valor de cada político. Após ler os dados do arquivo, 
o programa ordena o vetor de políticos de acordo com o valor, com o maior valor primeiro. 
Por fim, o programa exibe o nome dos políticos em ordem decrescente de valor e fecha o arquivo.

O método utiliza o algoritmo de ordenação por inserção para classificar os políticos. O vetor é ordenado 
com base no campo 'valor', e a ordenação é realizada em ordem decrescente.
*/

#include <iostream>
#include <fstream>

using namespace std;

struct politico {
    string nome;
    string partido;
    double valor;
};

int main() {
    ifstream arquivo("relacao_desvios.txt");
    
    politico vetor[100];
    int n = 0;

    // Correção do loop de leitura
    while (n < 100 && arquivo >> vetor[n].nome >> vetor[n].partido >> vetor[n].valor) {
        n++;
    }

    // Inserção com pivo do tipo correto e comparação pelo campo 'valor'
    politico pivo;
    int j;

    for (int i = 1; i < n; i++) {
        pivo = vetor[i];
        j = i - 1;

        while ((j >= 0) && (pivo.valor > vetor[j].valor)) {
            vetor[j + 1] = vetor[j];
            j--;
        }

        vetor[j + 1] = pivo;
    }

    // Exibir o resultado
    for (int i = 0; i < n; i++) {
        cout << vetor[i].nome << endl;
    }

    arquivo.close();

    return 0;
}
