#include <iostream>
using namespace std;

union Valor
{
    int inteiro;
    double decimal;
    char caractere;
};

int main()
{
    Valor valor;

    valor.inteiro = 10;
    cout << "Valor do inteiro: " << valor.inteiro << endl << endl;

    valor.decimal = 9.5;
    cout << "Valor do decimal: " << valor.decimal << endl << endl;

    valor.caractere = 'A';
    cout << "Valor do caractere: " << valor.caractere << endl << endl;
    
    return 0;
}