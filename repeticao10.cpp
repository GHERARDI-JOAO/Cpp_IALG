/*  Identifique o maior e o segundo maior valor em um conjunto de 7 elementos inteiros.
Além disso, deve ser apresentada a média dos demais elementos que compõem o conjunto.
*/

#include <iostream>
using namespace std;

int main (){
    float numero, maior, segundo, media = 0;
    cin >> numero;

    maior = numero;
    media = media + numero;

    int indice = 0;

    cin>> numero;
    if (numero > maior){
        segundo = maior;
        maior = numero;
    } else {
        segundo = numero;
    }
    media = media + numero;

    while (indice < 5) {
        cin>> numero;
        if (numero> maior){
            segundo = maior;
            maior = numero;
        } else if (numero > segundo){
            segundo = numero;
        }
        media = media + numero;
        indice++;

    }

    media = media - (maior + segundo); 
    cout<< maior<< endl<< segundo << endl<<(media/5);

    return 0;
}