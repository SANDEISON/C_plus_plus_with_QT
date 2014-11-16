#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> v;
    int tam;

    v.push_back(3);
    v.push_back(9);
    v.push_back(8);
    v.push_back(5);
    v.push_back(2);
    v.push_back(7);
    v.push_back(1);
    tam = v.size();
    for (int i = 0 ; i< tam; i++){
        cout << v[i] << endl;

    }


    return 0;
}

