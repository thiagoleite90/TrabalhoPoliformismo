#include "Forma.hpp"

class Triangulo : public Forma
{
  public:
  void calculoArea();
  private:
  float base;
  float altura;
  float area;
};