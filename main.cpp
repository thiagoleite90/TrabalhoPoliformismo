//Nome: Thiago dos Santos Leite

#include <iostream>
#include "Circulo.hpp"
#include "Retangulo.hpp"
#include "Triangulo.hpp"

int main() {
  cout <<"###########################" << endl;
  cout <<"#     CALCULO DE AREA     #" << endl;
  cout <<"#  DE FORMAS GEOMETRICAS  #" << endl;
  cout <<"# ATRAVES DE POLIMORFISMO #" << endl;
  cout <<"###########################" << endl;
  cout << "\n" << endl;
  Circulo areaC;
  Retangulo areaR; 
  Triangulo areaT;

  areaC.calculoArea();
  areaR.calculoArea();
  areaT.calculoArea();

  return 0;
}