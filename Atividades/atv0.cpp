#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // Exercicio 1

    cout << "Exercicio 1: \n\n";

    float temperatures[7];
    string daysOfWeek[7] = {"Segunda-feira", "Terca-feira", "Quarta-feira", "Quinta-feira", "Sexta-feira", "Sabado", "Domingo"};

    ifstream inputFile("inputs.txt");

    if (!inputFile)
    {
        cerr << "Erro ao abrir o arquivo para leitura!" << endl;
        return 1;
    }
    
    for(int i = 0; i < 7; i++)
    {
        inputFile >> temperatures[i];
        cout << daysOfWeek[i] << ": " << temperatures[i] << endl;
    }

    cout << endl;

    // Exercicio 2

    cout << "Exercicio 2: \n\n";

    int numbers[5];
    float mean = 0;

    for(int i = 0; i < 5; i++)
    {
        inputFile >> numbers[i];
        mean += numbers[i];
    }

    mean /= 5;

    cout << "Media: " << mean << endl;

    cout << endl;
    
    // Exercicio 3

    cout << "Exercicio 3: \n\n";

    inputFile.close();

    return 0;
}