#include <iostream>
#include "Interface.h"

using namespace std;


void Interface::setnumero(int x)
{
    while(x<0)
    {
        cout<<"Numero Invalido!! Digite um valor maior que 0\n";
        cin>>x;
    }
    numero = x;
}


int Interface::getnumero()
{
    return numero;
}

 int Interface::fatorial()
{
    int resultado = 1;
    for(int i = 1; i <= numero ;i++)
    {
	  resultado = resultado * i;
    }

    return resultado;
}




bool Interface::numeroperfeito()
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


bool Interface::capicua()
{
    int i,casas = 1,numero1,numero2,j;
	numero1 = numero;
	numero2 = numero;

	while((numero1 = numero1/10) > 0)
    {
    	casas++;
	}
	int aux[casas];
	cout<<"\n\n";

	for(i=0;i<casas;i++)
	{
		aux[i] = numero2%10;
		numero2 = numero2/10;


	}
	cout<<"\n\n";
	for(i=0,j=(casas-1);i<casas && aux[i] == aux[j]; i++,j--)
	{


	}
	if(i == (casas))
	  {
	  	return true;
	  }
	   return false;

}

bool Interface::quadradoperfeito()
{
   int termos = 1, soma = 0;

   for(termos,soma;soma<numero;termos++)
   {
 	soma= termos*(2+(termos-1)*2)/2;
   }

   if(soma==numero)
   {
 	return true;
   }
    return false;

}


bool Interface::numeroprimo()
{
 int i,cont=1;

	for(i=1;i<=numero/2;i++)
	{
		if(numero%i == 0)
		{
			cont++;
		}
	}

	if(cont == 2)
	{
		return true;
	}
	return false;
}


int Interface::mdc(Interface y)
{
    int maior = 0,i;

    if(numero > y.numero)
    {
    	for(i=1;i<=(y.numero/2);i++)
       {
        if(numero%i == 0 && y.numero%i == 0)
        {
            maior = i;
        }
       }

	}

    else
   {

    for(i=1;i<=(numero/2);i++)
    {
        if(numero%i == 0 && y.numero%i == 0)
        {
            maior = i;
        }
    }

   }
    return maior;

}

int Interface::mmc(Interface y)
{
    if(numero >= y.numero)
	{
		if(numero%y.numero == 0)
		{
			return numero;
		}
		else
		{
			return numero * y.numero;
		}
	}
	else
	{
		if(y.numero%numero == 0)
		{
			return y.numero;
		}
		else
		{
			return numero * y.numero;
		}
	}
}


bool Interface::numeroprimoentresi(Interface y)
{
    int i,igual=0;

	if(numero < y.numero)
	{

	   for(i=1;i<=numero/2;i++)
	   {
		   if(numero%i == 0 && y.numero%i == 0)
		   {
			  igual++;
		   }
	   }
   }
   else
   {
	for(i=1;i<=y.numero/2;i++)
	{
		if(y.numero%i == 0 && numero%i == 0)
		{
			igual++;
		}
	}
  }

  if(igual == 1)
  {
  	return true;
  }
    return false;
}
