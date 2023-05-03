#include <iostream>



//abaixo, protótipo de 2 funções

int comparar(int x, int y, int z);
void mostrarResultado(int valor);
        
int main()
{

    int a, b, c;

    std::cout << "Digite 3 numeros: " << std::endl;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    int maior = comparar(a, b, c);
    
    mostrarResultado(maior);
    
    

    
return 0;	
}


int comparar(int x, int y, int z) {
		int maior;
		
		if (x > y && x > z) {
			maior = x;
		} else if (y > z) {
			maior = y;
		} else {
			maior = z;
		}
		return maior;
	}
    

void mostrarResultado(int valor) {
		std::cout << "Maior numero = " << valor;
        std::cout << std::endl; //blank line
	}
