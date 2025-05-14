#include <iostream>
using namespace std;

int main()
{
    cout << "Digite uma palavra e veja ela invertida: " << endl;
    
    string palavra;
    int tamanhoDaPalavra = 0;

    cin >> palavra;

    tamanhoDaPalavra = palavra.size();

    char palavraInvertida[tamanhoDaPalavra];

    cout << "\nPalavra invertida: ";

    for(int i = 0; i < tamanhoDaPalavra+1; i++) palavraInvertida[i] = palavra[tamanhoDaPalavra-i];

    for(int i = 0; i < tamanhoDaPalavra+1; i++) cout << palavraInvertida[i];

    cout << endl;

    return 0;
}