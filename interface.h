#ifndef INTERFACE_H
#define INTERFACE_H


class Interface
{
private:
    int numero;
public:
    void setnumero(int x);
    bool numeroperfeito(int x);
    int getnumero();
    int fatorial(int x);
    /*
    bool numeroprimo(int x);
    bool numeroprimoentresi(int x,int y);
    bool quadradoperfeito(int x);
    bool capicua(int x);*/
};

#endif // INTERFACE_H
