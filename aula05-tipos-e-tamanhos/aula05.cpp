#include <iostream>
#include <string>

using namespace std;

int main() {
    int numero =  10;
    long int numero2 = 414783648;
    long long numero3 = 514783333648;
    float pi = 3.14;
    double taxa = 0.523589;
    char caractere = 'A';
    string nome = "alves";
    bool estado = true;
    cout << sizeof(numero) << endl;
    cout << sizeof(numero2) << endl;
    cout << sizeof(numero3) << endl;
    cout << sizeof(pi) << endl;
    cout << sizeof(taxa) << endl;
    cout << sizeof(caractere) << endl;
    cout << sizeof(nome) << endl;
    cout << sizeof(estado) << endl;

    return 0;
}