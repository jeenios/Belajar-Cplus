#include <iostream>
using namespace std;

int main () {
    // variabel biasa
    int a = 5;
    cout << " nilainya adalah : " << a << endl;
    cout << "alamatnya adalah : " << &a << endl << endl;

    // reference
    int &b = a;
    cout << " nilainya adalah : " << b << endl;
    cout << "alamatnya adalah : " << &b  << endl << endl;

    b = 10;
    cout << "nilainya adalah : " << a << endl;
    cout << "nilainya adalah : " << b  << endl << endl;

    a = 20;
    cout << "nilainya adalah : " << a << endl;
    cout << "nilainya adalah : " << b  << endl;

    return 0;
}