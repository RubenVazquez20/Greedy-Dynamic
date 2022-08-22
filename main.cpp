#include "moneyDynamic.hpp"
#include "moneyGreedy.hpp"
#include "print.hpp"
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

//Complejidad O(1)
int main(){
  int N;
  cin >> N;
  vector<int> array;
  vector<Dinero> dinero;

  monedasCambio(N, array, dinero);

  int P, Q;
  cin >> P;
  cin >> Q;

  // vector<int> resultado_greedy = cambioGreedy(P, Q, array);
  if (P > Q) {
    cout << "\nNo digas cosas Mary Jane, dame uno más grande " << endl;
  } else {
    vector<Dinero> resultado_dinamico = cambioDinamico(P, Q, array, dinero);
    print(resultado_dinamico, P, Q, 1);
    vector<Dinero> resultado_greedy = cambioGreedy(P, Q, array, dinero);
    print(resultado_greedy, P, Q, 0);
  }

  return 0;
}