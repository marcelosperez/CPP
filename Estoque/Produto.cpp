#include "Produto.h"
#include <iostream>
#include <string>
#include <cmath>



void Produto::SetNome(std::string nome)
{
   this->nome = nome;
}

std::string Produto::GetNome()
{
   return nome;
}


void Produto::SetPreco(double preco)
{
   this->preco = preco;
}

double Produto::GetPreco()
{
   
   return preco;
}




void Produto::SetQuantidade(int quantidade)
{
   this->quantidade = quantidade;
}

int Produto::GetQuantidade()
{
   
   return quantidade;
}







double Produto::ValorTotalNoEstoque()
{
	return preco * quantidade;
}

void Produto::AdicionarProdutos(int quantidade)
{
	this->quantidade += quantidade;
 // (*this).quantidade += quantidade ;
  // arrow operator (notacao seta)
}

void Produto::RemoverProdutos(int quantidade)
{
	this->quantidade -= quantidade;
 // (*this).quantidade -= quantidade ;
  // arrow operator (notacao seta)
}



