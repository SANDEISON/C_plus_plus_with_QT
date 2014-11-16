#include <iostream>

using namespace std;


// Ponteiro



// Referencia

void modifica (int *p) {

    *p=4;
}

void modifica2 (int &referencia) {

    referencia = 5;
}



int main()
{
    int x, *p;

    p = &x;
    *p = 5;
    cout << "valor de x " << x << endl;
    cout << " endereço de x:" <<  &x << endl;
    cout << "Endereço de P :" << p << endl;
    cout << "Valor de P :" << *p << endl;


    int k = 10;
    modifica(&k); // Ponteiro
    cout << "K Modificado  : " << k << endl;

    modifica2(k); // Referencia
    cout << "K Modificado2  : " << k << endl;




    return 0;
}

