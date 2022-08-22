#include <iostream>
#include <algorithm>
#include <limits>
#include <vector>

using namespace std;

struct Dinero
{
    int cantidad = 0;
    int valor;
};

// Complejidad O(1)
bool compare(Dinero a, Dinero b){
  if(a.valor > b.valor){
    return 1;
  }
  else{
    return 0;
  }
}

//Complejidad O(n^2)
void monedasCambio(int N, vector<int> &array, vector<Dinero> &dinero)
{
    int num;
    struct Dinero actual;
    for (int i = 0; i < N; i++)
    {
      cin >> num;
      while(num <= 0 || sizeof(num) != sizeof(int)){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"Ingresa un numero entero positivo mayor a 0: " << endl;
        cin>> num;
      }
      array.push_back(num);

      actual.valor = num;

      dinero.push_back(actual);        
    }
}

//Complejidad O(n^2)
vector<Dinero> cambioDinamico(int P, int Q, vector<int> monedas, vector<Dinero> dinero)
{
  int cambio = Q - P;
  int j = 0;
  int k = 0;

  vector<int> suma = {0};

  // ordenar el arreglo de monedas
  sort(monedas.begin(), monedas.end(), greater<>());
  sort(dinero.begin(), dinero.end(), compare);
  
  while (monedas[j] > cambio)
  {
    j++;
    k++;
  }

  dinero[k].cantidad++;
  suma.push_back(monedas[j]);
  
  for (int i = 2; suma[i-1] < cambio; i++)
  {

    while (monedas[j] + suma[i-1] > cambio)
    {
      j++;
      k++;
    }
    
    if(j < monedas.size())
    {
      suma.push_back(monedas[j] + suma[i-1]);
      dinero[k].cantidad++;
    }
  }

  return dinero;
}

