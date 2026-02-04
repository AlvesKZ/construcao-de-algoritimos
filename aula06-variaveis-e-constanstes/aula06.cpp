#include <iostream>
using namespace std;

#define d_num 30;

int main() {

    int v_num = 10;
    const int c_num = 20;

    v_num = 15;

    cout << v_num << endl;
    cout << c_num << endl;
    cout << d_num;
    
    return 0;
}