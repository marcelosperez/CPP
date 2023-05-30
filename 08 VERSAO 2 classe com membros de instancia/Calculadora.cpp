#include "Calculadora.h"
#include <iostream>
#include <iomanip> 

double Calculadora::Circunferencia(double r) {
     return 2.0 * PI * r;
}

double Calculadora::Volume(double r) {
	return 4.0 / 3.0 * PI * r * r * r;
}


