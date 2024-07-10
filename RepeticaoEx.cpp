/*Um material radioativo perde 25% de sua massa a cada 30 segundos. 
Crie um algoritmo que calcule iterativamente e exiba o tempo necessário para que a massa desse material se torne menor que 0,10 gramas. 
O usuário fornecerá a massa inicial (em gramas) do material radioativo.
O tempo deve ser exibido em horas, minutos e segundos.
*/

#include <iostream>

using namespace std;
int main() {
    float quantidade;
    int tempo = 0;

    cin >> quantidade;

    while (quantidade>= 0.10) {
        quantidade -= 25.0/100*quantidade;
        tempo += 30;
    }

    int horas = tempo/3600;
    tempo = tempo % 3600;

    int minutos = tempo / 60;
    tempo = tempo % 60;
    cout << horas << ":" << minutos << ":" << tempo << endl;


    return 0;
}
