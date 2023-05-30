#include "Calculadora.h"
#include <iostream>
#include <iomanip>

int main()
{

    Calculadora *calc = new Calculadora();
    delete calc;

    double raio, circ, volume;

    std::cout << "Entre o valor do raio: ";
    std::cin >> raio;

    circ = calc->Circunferencia(raio);
    volume = calc->Volume(raio);    

    std::cout << "Circunferencia: " << circ << std::endl;
    std::cout << "Volume: " << volume << std::endl;
    std::cout << "Valor de PI: " << PI << std::endl;

    return 0;       
}
		
