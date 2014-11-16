#include <iostream>

using namespace std;

//Serve para criarmos funções para qualquer tipo
template<typename tipo> tipo soma (tipo a , tipo b)
{

    return a + b;
}

// Prototipo do Template
 template<typename T> T multiplicacao (T a , T b);

int main()
{

    cout << "Inteiro : " << soma<int> (1,2) << endl;
    cout << "Float   : " << soma <float> (1.0f,2.0f) << endl;
    cout << "Double  : " << soma <double>(1.0,2.0) << endl;

    cout << "Inteiro : " << soma (1,2) << endl;
    cout << "Float   : " << soma (1.0f,2.0f) << endl;
    cout << "Double  : " << soma (1.0,2.0) << endl;

    cout << "Multiplicacao de Inteiro : " << multiplicacao (1,2) << endl;
    cout << "Multiplicacao de Float   : " << multiplicacao (1.0f,2.0f) << endl;
    cout << "Multiplicacao de Double  : " << multiplicacao (1.0,2.0) << endl;

    return 0;
}

//Implementação

template<typename T> T multiplicacao (T a , T b)
{

    return a * b;
}
