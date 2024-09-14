#include <iostream>
using namespace std;

struct produtos{
    string nome;
    string marca;
    double preco;
};

int main(){
    produtos vetor[100];
    produtos pivo;
    int j;
    int n;

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> vetor[i].nome >> vetor[i].marca >> vetor[i].preco;

    }


    for (int i = 1; i < n; i++){
        pivo = vetor[i];
        j = i-1;

    while ((j>=0) && ((pivo.preco < vetor[j].preco)||
        (pivo.preco == vetor[j].preco && pivo.nome < vetor[j].nome))){
        vetor[j+1] = vetor[j];
        j--;
    }

    vetor[j+1] = pivo;
}
    for (int i = 0; i < n; i++){
        cout << vetor[i].nome << " " << vetor[i].marca << " " << vetor[i].preco << endl;

    }

    return 0;

}