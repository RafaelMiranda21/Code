#include <iostream>
#include "Interface.h"

using namespace std;

int Interface::getnumero()
{
    return numero;
}

void Interface::setnumero(int x)
{
    while(x<0)
    {
        cout<<"Numero Invalido!! Digite um valor maior que 0\n";
        cin>>x;
    }
    numero = x;
}

bool Interface::numeroperfeito(int x)
{
    int i,soma=0;

	for(i=1 ; i<=(numero/2);i++)
	{
		if(numero%i == 0)
		{
			soma = soma + i;
		}


	}
	if(soma == numero)
	{
		return true;
	}
	    return false;

}

int Interface::fatorial(int x)
{
    int resultado = 1;
   for(int i = 1; i <= x ;i++)
    {
	  resultado = resultado * i;
    }

    return resultado;
}



