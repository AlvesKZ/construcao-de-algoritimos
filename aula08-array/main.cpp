#include <iostream>

#define tam 5

using namespace std;

int main() {

    int num[100];

    for (int i=0; i < tam; i++) {
        num[i] = i;
    }

    cout << num[1] << endl;
}