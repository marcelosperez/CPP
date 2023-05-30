#include "Retangulo.h"
#include <iostream>
//#include <string>
#include <iomanip>

int main()
{
    double larg, alt;
	
    Retangulo *retangulo = new Retangulo();
    delete retangulo;
    
    std::cout << "Digite a largura: ";
    std::cin >> larg;
    retangulo->setLargura(larg);
    
    std::cout << "Digite a altura: ";
    std::cin >> alt;
    retangulo->setAltura(alt);
    
    std::cout << "A largura é: " << retangulo->getLargura();
    
    std::cout << "\n"; 
    
    std::cout << "A altura é: " << retangulo->getAltura();
    
    std::cout << "\n\n"; 
    
 
    return 0;
    
}
	

	
