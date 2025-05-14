#include <iostream>
using namespace std;

union EnderecoIP
{
    unsigned int inteiro;
    unsigned char octetos[4];
};

int main()
{
    EnderecoIP enderecoIP;

    enderecoIP.octetos[0] = 200;
    enderecoIP.octetos[1] = 100;
    enderecoIP.octetos[2] = 10;
    enderecoIP.octetos[3] = 3;

    cout << "Acessando o endereco pelo inteiro: " << enderecoIP.inteiro << endl << endl;

    enderecoIP.inteiro = 123456789;

    cout << "Acessando o endereco pelos octetos: " << endl;

    for(int i = 0; i < 4; i++)
    {
        cout << "octetos[" << i << "]: " << (int)enderecoIP.octetos[i] << endl;
    }

    return 0;
}