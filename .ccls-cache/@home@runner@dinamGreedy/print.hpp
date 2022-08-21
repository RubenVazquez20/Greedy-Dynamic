#include <iostream>
using namespace std;

void print(vector<Dinero> &resultado, int P, int Q, int option){
  int suma = 0;
    cout << endl;
    cout << "[------------- Algoritmo ";
    (option == 1) ? cout << "Dinamico" : cout << "Greedy";
    cout << " -------------]" << endl;
    cout << "Tu cambio es de: $" << Q - P << endl << endl;
    for (int i = resultado.size() - 1; i >= 0; i--) {
      suma += resultado[i].cantidad * resultado[i].valor;
      cout << "Monedas de $" << resultado[i].valor << " -> "
           << resultado[i].cantidad << endl;
    }
    cout << endl << "Nos falto: $" << (Q - P) - suma << endl;
    cout << "[-------------....................-------------]" << endl;
    cout << endl;
}