#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main()
{
    float pi = 3.14159;
    float r = 0;
    double area = 0;

    cout << "Programa para calcular a area do circulo. Insira o raio: ";
    cin >> r;

    area = pi*r*r;



    printf("\nArea do circulo: %.2f", area);

    area *= 100;

    int aux = area;
    cout << aux;
    float area_aux = aux/100;

    

    return 0;
}