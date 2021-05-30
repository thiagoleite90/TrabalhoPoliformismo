#include <iostream>
using namespace std;
#ifndef Forma_hpp
#define Forma_hpp

class Forma {

  public:
  virtual void calculoArea() = 0; //virtual void
  protected:
  float area;
};
#endif