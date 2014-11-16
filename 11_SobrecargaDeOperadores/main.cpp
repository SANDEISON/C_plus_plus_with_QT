#include <iostream>

using namespace std;


struct Ponto
{
    double x , y;
};


//Prototipo da Fução
Ponto operator+(const Ponto &p, const Ponto &q);

int main()
{
    Ponto a, b, c, r;

    a.x = 0.0;
    a.y = -1.5;

    b.x = 2.4;
    b.y = 5.23;

    c.x = 0.0;
    c.y = 1.1;

    r = a + b + c;
    cout << r.x << " , "<< r.y << endl;


    return 0;
}

//Implementação da Função
Ponto operator+(const Ponto &p, const Ponto &q)
{
    Ponto r;
    r.x = p.x + q.x;
    r.y = p.y + q.y;
    return r;

}
