#include "Clientes.hpp"

void Clientes::SetClientes(string nome, int quarto, int tipoQuarto, int numCamas,int tipoCama)
{
	this->nome = nome;
    this->quarto = quarto;
    this->tipoQuarto = tipoQuarto;
    this->numCamas = numCamas;
    this->tipoCama = tipoCama;
};
	
void Clientes::imprime()
{
    cout << "Nome: "<< nome << " --" << "Num do Quarto:" << quarto << "\n";
    cout << "Tipo quarto" << tipoQuarto << " --" << "Tipo Cama:" << tipoCama << "Funcionario que reservou: SO TEM VOCE!!" << "\n";
}

string Clientes::GetNome()
{
    return nome;
}

int Clientes::GetQuarto()
{
    return quarto;
}