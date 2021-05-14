#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#pragma once
#include <iostream>
#include <stdio.h>
#include <windows.h>

#include "Clientes.hpp"

using namespace std;
	
class Funcionario  
{
	private:
        void DefinirClientes();
        bool resposta;
        Clientes c[100];

	public:

		Funcionario();
		void usar();

};
#endif