#pragma once
#include <iostream>
#include <string>

class Produto
{
	private:
          std::string Nome;
          double Preco;
          int Quantidade;
          
	public:
	      double ValorTotalEmEstoque();
	      void AdicionarProdutos(int quantiade);
	      void RemoverProdutos(int quantidade); 
};

