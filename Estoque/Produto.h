#pragma once
#include <iostream>
#include <string>

class Produto
{
	private:
          std::string nome;
          double preco;
          int quantidade;
          
	public:
	      void SetNome(std::string nome); // Os nomes dos metodos em C++ comecam com maiúsculas
	      std::string GetNome();
		  
	      void SetPreco(double preco);
          double GetPreco();
		  
          void SetQuantidade(int quantidade);
          int GetQuantidade();

	      double ValorTotalNoEstoque();
	      void AdicionarProdutos(int quantidade);
	      void RemoverProdutos(int quantidade); 
          
          void MostrarProdutos();
          
          

};

