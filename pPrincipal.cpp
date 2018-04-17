#include <iostream>
#include "Interface.h"
#include "metodos.cpp"

using namespace std;

int main ()
{
    Interface n1,n2;
    int numero,escolha;
    cout<<"Digite o primeiro maior que '0' : ";
    cin>>numero;
    cout<<"\n";
    n1.setnumero(numero);
    n1.getnumero();
    cout<<"\n\n";
    cout<<"Qual operacao deseja executar?\n";
    cout<<"Digite : \n";
    cout<<"[1] Para descobrir o fatorial de "<<numero<<"\n";
    cout<<"[2] Para descobrir se "<<numero<<" e um numero perfeito\n";
    cout<<"[3] Para saber se "<<numero<<" e capicua\n";
    cout<<"[4] Para saber se "<<numero<<" e quadrado perfeito\n";
    cout<<"[5] Para saber se "<<numero<<" e um numero primo\n";
    cout<<"[6] Mudar o "<<numero<<" da base 10 para base 2,8 ou 16\n";
    cout<<"[7] Maximo Divisor Comum entre "<<numero<<" e outro numero que sera digitado logo a seguir\n";
    cout<<"[8] Minimo Multiplo Comum entre "<<numero<<" e outro numero que sera digitado logo a seguir\n";
    cout<<"[9] Saber se o numero "<<numero<<" e outro numero que sera digitado logo a seguir sao primos entre si\n\n";
    cout<<"Sua escolha e : ";
    cin>>escolha;
    cout<<"\n\n";
    switch(escolha)
    {
     case 1:
         cout<<"O fatorial de "<<numero<<" e "<<n1.fatorial();
         break;

     case 2:
        if(n1.numeroperfeito())
        {
         cout<<"O "<<numero<<" e um numero perfeito";
        }

        else
        {
            cout<<"O "<<numero<<" nao e um numero perfeito";
        }
        break;

     case 3:
        if(n1.capicua())
        {
            cout<<"O "<<numero<<" e uma capicua";
        }
        else
        {
            cout<<"O "<<numero<<" nao e uma capicua";
        }
        break;

     case 4:
        if(n1.quadradoperfeito())
        {
            cout<<"O "<<numero<<" e um quadrado perfeito";
        }
        else
        {
            cout<<"O "<<numero<<" nao e um quadrado perfeito";
        }
        break;

     case 5:
        if(n1.numeroprimo())
        {
            cout<<"O "<<numero<<" e um numero primo";
        }
        else
        {
            cout<<"O "<<numero<<" nao e um numero primo";
        }
        break;


    }
    if(escolha > 6)
    {
    cout<<"Digite o segundo numero maior que '0' para executar a operacao "<<escolha<<" : ";
    cin>>numero;
    n2.setnumero(numero);
    n2.getnumero();
    }
    cout<<"\n\n";
    switch(escolha)
    {
     case 7:
         cout<<"O Maximo Divisor Comum entre "<<n1.getnumero()<<" e "<<n2.getnumero()<<" e "<<n1.mdc(n2);
         break;

     case 8:
         cout<<"O Minimo Multiplo Comum entre "<<n1.getnumero()<<" e "<<n2.getnumero()<<" e "<<n1.mmc(n2);
         break;
     case 9:
        if(n1.numeroprimoentresi(n2))
        {
            cout<<"Os numeros "<<n1.getnumero()<<" e "<<n2.getnumero()<<" sao primos entre si";
        }
        else
        {
            cout<<"Os numeros "<<n1.getnumero()<<" e "<<n2.getnumero()<<" nao sao primos entre si";
        }
        break;

     default:
     cout<<"operacao nao encontrada\n"<<"PROGRAMA FINALIZADO!!";


    }


cout<<"\n\n\n\n\n";


}
