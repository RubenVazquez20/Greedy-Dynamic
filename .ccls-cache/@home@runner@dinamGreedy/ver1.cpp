#include <iostream>
#include <vector>
using namespace std;

vector <int> greedy(int problema, int candidatos[], const int size){
  vector<int> solucion;
  int index=0;
  
  for(int i=0; i < size; i++){
    if(candidatos[i] < problema){
      solucion.push_back(candidatos[i]);
      problema -= candidatos[i];
      index++;
    }
  }
  return solucion;
}


int mainxxd(){
  int numSoluciones, precio, pago;
  cin>>numSoluciones; //Cantidad de billetes disponibles
  int denominacion[numSoluciones];//Cambio disponible

  //Obtener valores de los billetes disponibles
  for(int i=0; i<numSoluciones; i++){
    cin>>denominacion[i];
  }
  const int size = sizeof(denominacion) / sizeof(int);
  
  cin>>precio; //Precio del producto
  cin>>pago; //Con qué billete pagó.

  //Algoritmo avaro
  vector <int> resultado = greedy(pago - precio, denominacion, size);

  //Imprimir solucion
  for(int i : resultado){
    cout<<i<<" ";
  }
  
  return 0;
}