#include "Triangulo.h"
#include <iostream>
#include <string>
#include <cmath>

void Triangulo::SetA(double a)
{
	this->a = a;
  //(*this).a = a;
  // arrow operator (notacao seta)
}

double Triangulo::GetA()
{
	return a;
}

void Triangulo::SetB(double b)
{
	this->b = b;
 // (*this).b = b;
  // arrow operator (notacao seta)
}

double Triangulo::GetB()
{
	return b;
}

void Triangulo::SetC(double c)
{
	this->c = c;
  //(*this).c = c;
  // arrow operator (notacao seta)
}

double Triangulo::GetC()
{
	return c;
}

 double Triangulo::Perimetro()
{
    return a + b + c;
}

double Triangulo::Area()
{
    double sp = Perimetro() / 2;
    return (double) sqrt(sp * (sp - a) * (sp - b) * (sp - c));
}



