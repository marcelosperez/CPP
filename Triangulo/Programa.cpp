#include "Triangulo.h"
#include <iostream>
#include <string>
#include <iomanip>

int main()
{
	
    Triangulo x, y;
    double lado1x, lado2x, lado3x, lado1y, lado2y, lado3y;
    
    int invalidoX = 0;
    int invalidoY = 0;

    std::cout << "Lado 1 do Triangulo X : ";
    std::cin >> lado1x;
    x.SetA(lado1x);
    std::cout << "Lado 2 do Triangulo X : ";
    std::cin >> lado2x;
    x.SetB(lado2x);
    std::cout << "Lado 3 do Triangulo X : ";
    std::cin >> lado3x;
    x.SetC(lado3x);
    
    std::cout << "\n";

    if (lado1x > lado2x + lado3x || lado2x > lado1x + lado3x || lado3x > lado1x + lado2x)
    {
       std::cout << "Valores do Triangulo X invalidos ! " << "\n";
       std::cout << "Um lado não pode ser maior que a soma dos outros lados !" << "\n";
       invalidoX += 1;
     }
            
	std::cout << "Lado 1 do Triangulo Y : ";
	std::cin >> lado1y;
	y.SetA(lado1y);
	std::cout << "Lado 2 do Triangulo Y : ";
	std::cin >> lado2y;
	y.SetB(lado2y);
	std::cout << "Lado 3 do Triangulo Y : ";
	std::cin >> lado3y;
	y.SetC(lado3y);
    
    std::cout << "\n";

    if (lado1y > lado2y + lado3y || lado2y > lado1y + lado3y || lado3y > lado1y + lado2y)
	 {
       std::cout << "Valores do Triangulo Y invalidos ! " << "\n";
       std::cout << "Um lado não pode ser maior que a soma dos outros lados !" << "\n\n";
       invalidoY += 1;
     }

     double areaX = x.Area();
     double areaY = y.Area();

     if (invalidoX == 0)
     {
        std::cout << std::fixed << std::setprecision(4);
          std::cout << "O perimetro de X eh : " << x.Perimetro() << "\n";
	      std::cout << "A area de X eh : " << areaX << "\n\n";
      }
          
           
      if (invalidoY == 0)
      {         
        std::cout << std::fixed << std::setprecision(4);
        std::cout << "O perimetro de Y eh : " << y.Perimetro() << "\n";
        std::cout <<"A area de Y eh : " << areaY << "\n\n";
       }
     
       
      if ( (invalidoX == 0) && (invalidoY == 0) )
      { 
			if (areaX > areaY)
			{
			std::cout << "X tem a maior area" << "\n\n";
			}
			else
			{
			std::cout << "Y tem a maior area" << "\n\n";
		    }
      }
      
    return 0;
    
}
	

	
