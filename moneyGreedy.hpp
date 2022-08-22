#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

// Definir el cambio - Algoritmo dinámico
// Complejidad O(n^2)
vector<Dinero> cambioGreedy(int P, int Q, vector<int> monedas, vector<Dinero> dinero)
{
    int cambio = Q - P, i = 0;
    size_t tam = monedas.size();

    // ordenar el arreglo de monedas
    sort(monedas.begin(), monedas.end(), greater<>());
    sort(dinero.begin(), dinero.end(), compare);
  
    while (cambio > 0 && i < tam)
    {
        while (monedas[i] <= cambio)
        {
          cambio -= monedas[i];
          dinero[i].cantidad++;
        }
        i++;
    }
  
    return dinero;
}