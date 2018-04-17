#ifndef INTERFACE_H
#define INTERFACE_H


class Interface
{
private:
    int numero;
public:
    void setnumero(int x);
    int getnumero();
    int fatorial();
    bool numeroperfeito();
    bool capicua();
    bool quadradoperfeito();
    bool numeroprimo();
    int mdc(Interface y);
    int mmc(Interface y);
    bool numeroprimoentresi(Interface y);

};

#endif // INTERFACE_H

