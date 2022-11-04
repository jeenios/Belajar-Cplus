#include <iostream>

using namespace std;

int main () {
    int a = 5;
    int b = 15;
    int hasil;


    // penjumlahan
    hasil = a + b;
    cout << a << " + " << b << " = " << hasil << endl;
    // pengurangan
    hasil = a - b;
    cout << a << " - " << b << " = " << hasil << endl;
    // perkalian
    hasil = a * b;
    cout << a << " x " << b << " = " << hasil << endl;
    // bagian
    hasil = a / b;
    cout << a << " : " << b << " = " << hasil << endl;
    // modulus
    hasil = a % b;
    cout << a << " % " << b << " = " << hasil << endl;

    cin.get();
    return 0;
}