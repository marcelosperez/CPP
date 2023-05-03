#include "Retangulo.h"
#include <iostream>
//#include <string>
#include <iomanip>

int main()
{
    double larg;
	
    Retangulo *reto = new Retangulo();
    delete reto;
    
    std::cout << "Digite a largura: ";
    std::cin >> larg;
    reto->setLargura(larg);
    
    std::cout << reto->getLargura();
    
    std::cout << "\n"; 
    
 
    return 0;
    
}
	

	
