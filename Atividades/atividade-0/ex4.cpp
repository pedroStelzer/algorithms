#include <iostream>
using namespace std;

struct Livro
{
    string titulo;
    string autor;
    int anoPublicacao;

    Livro(string titulo, string autor, int anoPublicacao)
    : titulo(titulo), autor(autor), anoPublicacao(anoPublicacao) {}

    ~Livro() {}

    void imprimeInformacoes()
    {
        cout << "Titulo: " << this->titulo << endl;
        cout << "Autor: " << this->autor << endl;
        cout << "Ano de Publicacao: " << this->anoPublicacao << endl << endl;
    }
};

int main()
{
    Livro livro1("O Senhor dos Aneis", "J.R.R. Tolkien", 1954);
    Livro livro2("O Hobbit", "J.R.R. Tolkien", 1937);

    livro1.imprimeInformacoes();
    livro2.imprimeInformacoes();

    return 0;
}