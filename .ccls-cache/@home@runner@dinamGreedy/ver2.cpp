#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

// Tomar monedas de cambio existentes
void monedasCambio(int N, int array[]) {
  for (int i = 0; i < N; i++) {
    cin >> array[i];
  }
}

// Definir el cambio - Algoritmo dinámico
void cambioDinamico(int P, int Q, int &monedas[]) {
  vector<int> suma;
  int cambio = Q - P, i=0;
  int tam = sizeof(monedas) / sizeof(int);

  // ordenar el arreglo de monedas
  sort(monedas, monedas + tam, greater<int>());
  
  while (cambio > 0 && i < tam) {
    while (monedas[i] < cambio) {
      cambio -= monedas[i];
      suma.push_back(monedas[i]);
    }
    i++;
  }
}

int main() {
  int N;
  cin >> N;
  int array[N];

  monedasCambio(N, array);

  for (auto x : array) {
    cout << x << endl;
  }

  int P, Q;
  cin >> P;
  cin >> Q;
  return 0;
}