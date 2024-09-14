/*
Este programa lê um número 'n' de produtos e suas respectivas informações (nome, descrição, preço e avaliação) 
a partir da entrada padrão. Utiliza o algoritmo de ordenação por seleção (Selection Sort) para ordenar os produtos 
em ordem decrescente com base na avaliação. Após a ordenação, o programa realiza uma busca para encontrar e exibir 
as informações de um produto específico com base no nome fornecido. Se o produto não for encontrado, exibe "-1".

O programa é estruturado da seguinte forma:
1. Leitura do número 'n' e alocação dinâmica de um vetor de produtos.
2. Leitura das informações dos produtos e armazenamento no vetor.
3. Ordenação dos produtos em ordem decrescente de avaliação usando o algoritmo de ordenação por seleção.
4. Busca do produto com base no nome fornecido e exibição de suas informações.
5. Liberação da memória alocada e término do programa.

O algoritmo de ordenação por seleção (Selection Sort) funciona da seguinte forma:
- Percorre o vetor procurando o maior elemento e troca-o com o elemento na posição atual.
- Repete o processo para o restante do vetor até que todos os elementos estejam ordenados.
*/

#include <iostream> 
using namespace std;

struct produto{
    string nome;
    string desc;
    double preco;
    int avalia;
};

int main (){

   int n;
   cin >> n;
   int j;
   produto* vetor = new produto[n]; 

   // Leitura das informações dos produtos
   for (int i = 0; i < n; i++){
       cin >> vetor[i].nome >> vetor[i].desc >> vetor[i].preco >> vetor[i].avalia;
   } 

   produto aux;
   int menor;

   // Algoritmo de ordenação por seleção (Selection Sort)
   for (int i = 0; i < n - 1; i++){
       menor = i;

       for (j = i + 1; j < n; j++){
           // Encontrar o índice do produto com a maior avaliação
           if (vetor[j].avalia > vetor[menor].avalia){
               menor = j;
           }
       }

       // Trocar o produto atual com o produto de maior avaliação encontrado
       aux = vetor[i];
       vetor[i] = vetor[menor];
       vetor[menor] = aux;
   }

   string nome_buscado;
   cin >> nome_buscado;

   bool encontrado = false;
   // Busca do produto com o nome fornecido
   for (int i = 0; i < n; i++){
       if (vetor[i].nome == nome_buscado){
           cout << vetor[i].nome << " " << vetor[i].desc << " " << vetor[i].preco << " " << vetor[i].avalia << endl;
           encontrado = true;
       }
   }

   // Se o produto não for encontrado, exibir "-1"
   if (!encontrado){
       cout << "-1" << endl;
   }

   delete[] vetor; // Liberação da memória alocada
   return 0;
}
