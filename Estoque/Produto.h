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
	      double ValorTotalNoEstoque();
	      void AdicionarProdutos(int quantidade);
	      void RemoverProdutos(int quantidade); 
	      void SetNome(std::string nome);
	      std::string GetNome();
	      void SetPreco(double preco);
              double GetPreco();
              void SetQuantidade(int quantidade);
              int GetQuantidade();

};

