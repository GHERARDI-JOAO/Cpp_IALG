/*
Este programa gerencia uma lista de alunos, permitindo ordenar e buscar informações sobre eles. 
Ele realiza as seguintes operações:

1. Define uma estrutura `aluno` que contém o nome, idade e nota do aluno.
2. Utiliza o algoritmo de ordenação por inserção (Insertion Sort) para ordenar os alunos com base em suas notas em ordem crescente.
3. Realiza uma busca linear para encontrar um aluno pelo nome.
4. Exibe a lista de alunos ordenados por nota e fornece a opção de buscar um aluno específico.

O algoritmo de ordenação por inserção funciona da seguinte forma:
- Começa no segundo elemento e o compara com os elementos anteriores.
- Move os elementos maiores para a direita até encontrar a posição correta para o elemento atual.
- Insere o elemento na posição correta e continua para o próximo elemento até o final do vetor.

A busca linear percorre todos os elementos do vetor até encontrar o aluno com o nome correspondente ou retornar -1 se o aluno não for encontrado.
*/

#include <iostream>
#include <string>
using namespace std;

struct aluno {
    string nome;
    int idade;
    double nota;
};

// Função para ordenar o vetor de alunos usando o algoritmo de ordenação por inserção
void insertionSort(aluno vetor[], int n) {
    aluno pivo;
    int j;

    for (int i = 1; i < n; i++) {
        pivo = vetor[i];
        j = i - 1;

        // Ordena em ordem crescente com base na nota
        while (j >= 0 && pivo.nota < vetor[j].nota) {
            vetor[j + 1] = vetor[j];
            j--;
        }

        vetor[j + 1] = pivo;
    }
}

// Função para buscar um aluno pelo nome e retornar sua posição no vetor
int buscaAluno(aluno vetor[], int n, string nomeBuscado) {
    for (int i = 0; i < n; i++) {
        if (vetor[i].nome == nomeBuscado) {
            return i;
        }
    }
    return -1;  // Retorna -1 se não encontrar o aluno
}

int main() {
    aluno vetor[100] = {
        {"Ana", 20, 7.5},
        {"Bruno", 22, 8.0},
        {"Carlos", 21, 6.3},
        {"Daniela", 23, 9.1},
        {"Eduardo", 22, 7.0}
    };

    int n = 5;

    // Ordena os alunos usando Insertion Sort
    insertionSort(vetor, n);

    // Exibe os alunos ordenados
    cout << "Alunos ordenados por nota:" << endl;
    for (int i = 0; i < n; i++) {
        cout << vetor[i].nome << " " << vetor[i].nota << endl;
    }

    // Busca por um aluno pelo nome
    string nomeBuscado;
    cout << "Digite o nome do aluno que deseja buscar: ";
    cin >> nomeBuscado;

    int posicao = buscaAluno(vetor, n, nomeBuscado);
    if (posicao != -1) {
        cout << "Aluno encontrado: " << vetor[posicao].nome << " - " << vetor[posicao].nota << endl;
    } else {
        cout << "Aluno não encontrado." << endl;
    }

    return 0;
}
