#include <iostream>
using namespace std;

struct Aluno
{
    string nome;
    int matricula;

    Aluno(string nome, int matricula)
    : nome(nome), matricula(matricula) {}

    void imprimeInformacoes()
    {
        cout << "Nome do aluno: " << this->nome << endl;
        cout << "Matricula do aluno: " << this->matricula << endl << endl;
    }
};

int main()
{
    Aluno *arr[3];

    cout << "Insira os dados dos alunos: " << endl << endl;

    for(int i = 0; i < 3; i++)
    {
        string nome;
        int matricula;

        cout << "Insira o nome: ";
        cin >> nome;

        matricula = i+1;

        arr[i] = new Aluno(nome, matricula);
    }

    cout << endl;

    for(int i = 0; i < 3; i++) arr[i]->imprimeInformacoes();

    return 0;
}