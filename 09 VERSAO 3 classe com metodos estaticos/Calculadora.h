#pragma once
#include <iostream>

#define PI 3.14

class Calculadora {

	public:
	         static double Circunferencia(double r); 
    	     static double Volume(double r);          
};

// Voce declara os metodos como estaticos apenas
// em Calculadora.h, nao sendo necessario
// declarar de novo em Calculadora.cpp