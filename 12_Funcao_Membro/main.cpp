#include <iostream>

using namespace std;

struct Pessoa
{
    string Nome;
    int idade;
    double salario;

    void imprime ()const;
    void Modifica_Idade (int e);
};



int main()
{
    Pessoa Sandeison, Celia, Kaka;

    Sandeison.Nome = "Sandeison";
    Sandeison.idade = 28;
    Sandeison.salario = 1.000;

    Celia.Nome = "Celia";
    Celia.idade = 51;
    Celia.salario = 800.0;

    Kaka.Nome = "Sandervan";
    Kaka.idade = 27;
    Kaka.salario = 700.0;
    Sandeison.Modifica_Idade(50);
    Sandeison.imprime();
    Celia.imprime();
    Kaka.imprime();

    return 0;
}

void Pessoa ::imprime() const{

    cout << "Nome : " << Nome << endl;
    cout << "Idade : " <<idade << endl;
    cout << "Salario : " << salario << endl;
}

void Pessoa ::Modifica_Idade(int e){
    idade = e;

}
