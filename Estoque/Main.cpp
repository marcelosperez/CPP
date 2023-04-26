#include "Produto.h"
#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    std::string nome;
    double preco;
    int quantidade;
	
    Produto produto;
    std::cout << "Didite os dados do produto: ";
    std::cout << "Nome: ";
    std::cin >> nome;
    produto.SetNome(nome);
    
    std::cout << "Preco: ";
    std::cin >> preco;
    produto.SetPreco(preco);
    
    std::cout << "Quantidade: ";
    std::cin >> quantidade;
    produto.SetQuantidade(quantidade);
    
    
    std::cout << produto.GetNome() << "\n";
    std::cout << produto.GetPreco() << "\n";
    std::cout << produto.GetQuantidade() << "\n"; 
    
 
    return 0;
    
}
	

	
