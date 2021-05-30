#include "Triangulo.hpp"

void Triangulo::calculoArea()
{
  cout << "PARA CALCULAR A AREA DE UM TRIANGULO" << endl;
  cout << "\nDigite a base do triangulo: ";
  cin >> base;
  cout << "Digite a altura do triangulo: ";
  cin >> altura;
  area = (base*altura)/2;
  cout << "A area do triangulo eh: " << area << endl << endl;
  cout <<"==========================================\n" << endl;}