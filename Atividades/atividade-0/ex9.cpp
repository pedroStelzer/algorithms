#include <iostream>
using namespace std;

union Valor
{
    int inteiro;
    double decimal;
    char caractere;
};

enum Tipo
{
    INTEIRO,
    DECIMAL,
    CARACTERE
};

struct Dado
{
    Valor valor;
    Tipo tipo;

    void setValor(int valor, Tipo tipo)
    {
        this->valor.inteiro = valor;
        this->tipo = tipo;
    }

    void setValor(double valor, Tipo tipo)
    {
        this->valor.decimal = valor;
        this->tipo = tipo;
    }

    void setValor(char valor, Tipo tipo)
    {
        this->valor.caractere = valor;
        this->tipo = tipo;
    }

    void getValor()
    {
        if(this->tipo == INTEIRO) cout << "Valor (inteiro): " << this->valor.inteiro << endl;
        else if (this->tipo == DECIMAL) cout << "Valor (decimal): " << this->valor.decimal << endl;
        else if (this->tipo == CARACTERE) cout << "Valor (caractere): " << this->valor.caractere << endl;
    }
};

int main()
{
    Dado dado;

    dado.setValor(10, INTEIRO);
    dado.getValor();

    dado.setValor(5.56, DECIMAL);
    dado.getValor();

    dado.setValor('A', CARACTERE);
    dado.getValor();

    return 0;
}