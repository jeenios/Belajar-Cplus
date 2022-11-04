#include <iostream>

using namespace std;

int main () {
    int a;

    cout << "Masukan Angka = ";
    cin >> a;

    if (a == 5){
        cout << "Benar angka anda 5" << endl;
    } else if (a == 4){
        cout << "Benar angka anda 4" << endl;
    } else if (a == 3){
        cout << "Benar angka anda 3" << endl;
    } else {
        cout << "Angka yang anda masukan bukan 5,4, dan 3" << endl;
    }

    cout << "Terimakasih";
    cin.get();
    return 0;
}