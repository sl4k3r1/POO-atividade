#ifndef CLIENTES_H
#define CLIENTES_H
#pragma once

#include <iostream>
#include <stdio.h>
#include <windows.h>

using namespace std;
	
class Clientes  
{
	private:
		string nome;
		int quarto;
		int tipoQuarto;
		int numCamas;
        int tipoCama;
		
	public:

		string GetNome();
		int GetQuarto();
        void SetClientes(string nome, int quarto, int tipoQuarto, int numCamas, int tipoCama);
		void imprime();
};
#endif