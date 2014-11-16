#include <iostream>

using namespace std;

//Temso  duas funções mas com parametros diferentes
int soma (int a , int b){
   cout << "Inteiro "<< endl;
    return a + b;
}
float soma (float a, float b){
    cout << "Float "<< endl;
    return a + b;
}

double soma (double a, double b){
    cout << "Double "<< endl;
    return a + b;
}


int main()
{

    cout << soma (1,2 ) << endl;
    cout << soma (1.0f,2.0f ) << endl;
    cout << soma (1.0 , 2.0  ) << endl;
    return 0;
}

