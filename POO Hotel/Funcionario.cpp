#include "Funcionario.hpp"
	
Funcionario::Funcionario()
{
   resposta = false;
}

void Funcionario::DefinirClientes()
{
    string nome;
    char resp;
    int quarto;
    int tipoQuarto;
    int numCamas;
    int tipoCama;
    int i = 0;

    do {
        i++;
        cout << "-------------------------------------- \n";
        cout << "           Adicionar Cliente \n";
        cout << "-------------------------------------- \n";
        cout << "Qual o nome do Clinte? ";
        cin >> nome;
        cout << "Qual quarto ele vai usar?(1-100) ";
        cin >> quarto;
        cout << "Qual tipo de quarto?(1=Simples|2=Luxo) ";
        cin >> tipoQuarto;
        cout <<"Quantas Camas no quarto(1-4)?";
        cin >> numCamas;
        cout <<"Qual tipo de Cama(1=solteiro|2=casal)?";
        cin >> tipoCama;
        c[i].SetClientes(nome, quarto, tipoQuarto, numCamas, tipoCama);

        cout <<"Quer adicionar mais um?(s/n)";
        cin >> resp;
        if(resp == 'n')
        {
            resposta = true;
        }else
            system("cls");
    }while(resposta);
}

void Funcionario::usar()
{
    DefinirClientes();

    int resp;

    do{
        cout << "-------------------------------------- \n";
        cout << "        Interface Funcionario \n";
        cout << "-------------------------------------- \n";
        cout << "\n!!Digite o numero de Qual quer entrar!! \n";

        cout << "1- Verificar Quartos e Clientes: \n";
        cout << "2- Inserir uma nova reserva e cliente: \n";
        cout << "3- Alterar inforamcoes de clientes: \n";
        cin >> resp;
        system("cls");

        for (int i = 0; i < 10; i++) {
            printf("Carregando %d", i);
            for (int j = 0; j < 40; j++) {
                printf(".");
                Sleep(20);
            }
            printf("\r");
            for (int j = 0; j < 60; j++) {
                printf(" "); // apaga a linha anterior
            }
            printf("\r");
        }

        switch(resp) {
            case 1:

                break;
            case 2:

                break;
            case 3:
                Sleep(400);
                cout << "Não Consegui ainda";
                break;
        }

    }while(resposta);
}