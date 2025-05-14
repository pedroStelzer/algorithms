#include <iostream>
using namespace std;

int main()
{
    int numeros[5];
    float media = 0;

    cout << "Digite 5 numeros para calcular a media entre eles: " << endl << endl;

    for(int i = 0; i < 5; i++)
    {
        cin >> numeros[i];
        media += numeros[i];
    }

    media /= 5;

    cout << "\nMedia: " << media << endl;

    return 0;
}