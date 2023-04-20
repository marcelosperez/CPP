#pragma once
#include <iostream>
#include <string>

class Triangulo
{
	private:
          double a;
          double b;
          double c;

	public:
	      double GetA();
	      void SetA(double a);

	      double GetB();
	      void SetB(double b);

	      double GetC();
	      void SetC(double c);

	      double Perimetro();

	      double Area();
};

