#include "Retangulo.hpp"

void Retangulo::calculoArea(){

  cout << "PARA CALCULAR A AREA DE UM RETANGULO" << endl;
  cout << "\nDigite a base do retangulo: ";
  cin >> base;
  cout << "Digite a altura do retangulo: ";
  cin >> altura;
  area = base*altura;
  cout << "A area do retangulo eh: " << area << endl << endl;
  cout <<"==========================================\n" << endl;
}
