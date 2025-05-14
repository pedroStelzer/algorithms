#include <iostream>
using namespace std;

int main()
{
    float temperaturas[7] = {30.1, 29.8, 30.1, 30.5, 31.1, 29.9, 29.8};
    string diasDaSemana[7] = 
    {
        "Segunda-feira", 
        "Terca-feira  ", 
        "Quarta-feira ", 
        "Quinta-feira ", 
        "Sexta-feira  ", 
        "Sabado       ", 
        "Domingo      "
    };
    
    for(int i = 0; i < 7; i++) cout << diasDaSemana[i] << ": " << temperaturas[i] << " °C" << endl;

    return 0;
}