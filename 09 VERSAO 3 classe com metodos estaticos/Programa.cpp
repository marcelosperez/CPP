#include "Calculadora.h"
#include <iostream>
#include <iomanip>

int main()
{

    double raio, circ, volume;

    std::cout << "Entre o valor do raio: ";
    std::cin >> raio;

    // Como voce definiu metodos estaticos em Calculadora.h
	// static double Circunferencia(double r);
	// static double Volume(double r);   
	// Voce NAO criara objetos de instanciacao
	// por isso, devera usar o proprio nome da classe,
	// no nosso caso "Calculadora", para chamar
	// os metodos estaticos
	// circ = Calculadora::Circunferencia(raio);
	// volume = Calculadora::Volume(raio);    
   
    circ = Calculadora::Circunferencia(raio);
    volume = Calculadora::Volume(raio);    

    std::cout << "Circunferência: " << circ << std::endl;
    std::cout << "Volume: " << volume << std::endl;
	std::cout << "Valor de PI: " << PI << std::endl;

    return 0;       
}
		
