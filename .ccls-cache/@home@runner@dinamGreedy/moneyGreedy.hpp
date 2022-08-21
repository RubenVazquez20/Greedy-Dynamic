#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

// Definir el cambio - Algoritmo dinámico
vector<Dinero> cambioGreedy(int P, int Q, vector<int> monedas, vector<Dinero> &dinero)
{
    vector<int> suma;
    int cambio = Q - P, i = 0;
    int tam = monedas.size();

    // ordenar el arreglo de monedas
    sort(monedas.begin(), monedas.end(), greater<>());
    sort(dinero.begin(), dinero.end(), compare);

    while (cambio > 0 && i < tam)
    {
        while (monedas[i] <= cambio)
        {
            cambio -= monedas[i];
            suma.push_back(monedas[i]);
            dinero[i].cantidad++;
        }
        i++;
    }
  
    return dinero;
}