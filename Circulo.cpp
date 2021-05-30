#include "Circulo.hpp"

void Circulo::calculoArea(){
  
  cout << "PARA CALCULAR A AREA DE UM CIRCULO" << endl;
  cout << "\nDigite o raio: ";
  cin >> raio;
  area = 3.14*(raio*raio);
  cout << "A area do circulo eh: " << area << endl << endl;
  cout <<"==========================================\n" << endl;
}