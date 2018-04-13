#include <iostream>
#include "Interface.h"
#include "metodos.cpp"

using namespace std;

int main ()
{
    Interface n1,n2;
    int numero;
    cout<<"Digite o primeiro maior que 0\n";
    cin>>numero;
    n1.setnumero(numero);

    if(n1.numeroperfeito(numero))
    {
      cout<<"O Primeiro Numero e perfeito!";
    }

    cout<<n1.fatorial(numero);





}
