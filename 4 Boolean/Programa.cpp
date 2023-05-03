#include <iostream>



bool is4digits (std::string pin);

//in boolean, 0 is false
//and 1 is true

int main()
{
	std::string PIN;
	
	std::cout << "Digite um numero de 4 digitos: ";
	std::cin >> PIN;
	
	if (is4digits(PIN) == 1)
		std::cout << "PIN aceito";
	else
		std::cout << "PIN recusado";
	    std::cout << std::endl;
	
	
	return 0;
}

bool is4digits (std::string pin)
{
	bool status = true;
	if (pin.length() != 4) 
	{
		status = false;
	}
	return status;
}





