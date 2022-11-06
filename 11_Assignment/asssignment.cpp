#include <iostream>

using namespace std;

int main () {
    int a = 10;

    cout << "Ini adalah nilai awal = " << a << endl;

    a += 5;
    cout << "Ditambah Menjadi " << a << endl;

    a -= 5;
    cout << "Dikurangi Menjadi " << a << endl;

    a /= 5;
    cout << "Dibagi Menjadi " << a << endl;

    a *= 5;
    cout << "Dikali Menjadi " << a << endl;

    a %= 5;
    cout << "Dimodulus Menjadi " << a << endl;

return 0;
}