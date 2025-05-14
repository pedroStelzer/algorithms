#include <iostream>
#include <cmath>
using namespace std;

struct Ponto
{
    int x;
    int y;

    Ponto(int x, int y) : x(x), y(y) {}

    int getX() {return this->x;}
    int getY() {return this->y;}
};

int main()
{
    double distancia = 0;

    Ponto p1(10, 1);
    Ponto p2(1, 4);

    distancia = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));

    cout << "Ponto 1: " << "(" << p1.getX() << ", " << p1.getY() << ")" << endl;
    cout << "Ponto 2: " << "(" << p2.getX() << ", " << p2.getY() << ")" << endl; 

    cout << "\nDistancia entre o ponto 1 e 2: " << distancia << endl;

    return 0;
}