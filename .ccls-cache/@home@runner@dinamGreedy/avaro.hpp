#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

// Tomar monedas de cambio existentes
void monedasCambio(int N, vector<int> &array) {
  int num;
  for (int i = 0; i < N; i++) {
    cin >> num;
    array.push_back(num);
  }
}

// Definir el cambio - Algoritmo avaro
vector<int> cambioDinamico(int P, int Q, vector<int> monedas) {
  vector<int> suma;
  int cambio = Q - P, i = 0;
  int tam = monedas.size();

  // ordenar el arreglo de monedas
  sort(monedas.begin(), monedas.end(), greater<>());

  while (cambio > 0 && i < tam) {
    while (monedas[i] <= cambio) {
      cambio -= monedas[i];
      suma.push_back(monedas[i]);
    }
    i++;
  }
  return suma;
}

