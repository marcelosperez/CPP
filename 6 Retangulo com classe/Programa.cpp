#include "Retangulo.h"
#include <iostream>
//#include <string>
#include <iomanip>

int main()
{
    double larg, alt;
	
    Retangulo *reto = new Retangulo();
    delete reto;
    
    std::cout << "Digite a largura: ";
    std::cin >> larg;
    reto->setLargura(larg);
    
    std::cout << "Digite a altura: ";
    std::cin >> alt;
    reto->setAltura(alt);
    
    std::cout << "A largura é: " << reto->getLargura();
    
    std::cout << "\n"; 
    
    std::cout << "A altura é: " << reto->getAltura();
    
    std::cout << "\n\n"; 
    
 
    return 0;
    
}
	

	
