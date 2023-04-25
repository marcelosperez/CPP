#include "Produto.h"
#include <iostream>
#include <string>
#include <cmath>


double Produto::ValorTotalEmEstoque()
{
	return Quatidade;
}

void Produto::AdicionarProdutos(int quantidade)
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



