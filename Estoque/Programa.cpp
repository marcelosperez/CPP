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
	
    std::cout << "Didite os dados do produto " << "\n";
    std::cout << "Nome: ";
    std::cin >> nome;
    produto.SetNome(nome);
    
    std::cout << "Preco: ";
    std::cin >> preco;
    produto.SetPreco(preco);
    
    std::cout << "Quantidade: ";
    std::cin >> quantidade;
    produto.SetQuantidade(quantidade);
    
	std::cout << "\n"; // blank line
        
    std::cout <<"Dados do produto: ";
    produto.MostrarProdutos();
    
    std::cout << "\n"; // blank line
    
    int quantidadeAdicionados;
    std::cout <<"Digite o numero de produtos que serao adicionados no estoque: ";
    std::cin >> quantidadeAdicionados;
    produto.AdicionarProdutos(quantidadeAdicionados);
    std::cout << "\n"; // blank line
    std::cout <<"Dados atualizados: ";
    produto.MostrarProdutos();
  	std::cout << "\n"; // blank line

    
    int quantidadeRemovidos;
    std::cout <<"Digite o numero de produtos que serao removidos do estoque: ";
    std::cin >> quantidadeRemovidos;
    produto.RemoverProdutos(quantidadeRemovidos);
    std::cout << "\n"; // blank line
    std::cout <<"Dados atualizados: ";
    produto.MostrarProdutos();
  	std::cout << "\n"; // blank line
 
   
    return 0;
    
}
	

	
