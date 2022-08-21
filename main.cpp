// // Incluir ambas soluciones
// #include "avaro.hpp"
// #include "dinamico.hpp"

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//   int N;
//   cin >> N;
//   vector<int> array;

//   monedasCambio(N, array);

//   int P, Q;
//   cin >> P;
//   cin >> Q;

//   vector<int> resultado = cambioDinamico(P, Q, array);
//   for (auto x : resultado) {
//     cout << x << endl;
//   }
//   return 0;
// }

#include "moneyDynamic.hpp"
#include "moneyGreedy.hpp"
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> array;
  vector<Dinero> dinero;

  monedasCambio(N, array, dinero);

  int P, Q;
  cin >> P;
  cin >> Q;

  // vector<int> resultado_greedy = cambioGreedy(P, Q, array);
  vector<Dinero> resultado_dinamico = cambioDinamico(P, Q, array, dinero);

  for (auto x : resultado_dinamico) {
    cout << x.valor << ": " << x.cantidad << endl;
  }

  return 0;
}