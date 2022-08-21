#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Money {
  int value;
  int quantity = 0;
}

vector<int> moneyDinamic(vector<int> money, int p, int q){
  vector<Money> solution;
  int i = 0;
  int cambio = q - p;

  sort(money.begin, money.end(), greater<>());

  while(cambio > 0 && i < money.size()){
    while(money[i] <= cambio){

      // here
      
      
    }
  }
}

void fillVector(int n, vector<Money> &vector){
  int x;
  struct Money *n;

  for(int i = 0, i < n; i++){
    cin >> x;
    m[i].value = x;
    vector.push_back(m[i])
  }
}

