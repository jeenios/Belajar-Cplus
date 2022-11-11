#include <iostream>
using namespace std;

int main(){
    // basic array
    int nilai[5];
    nilai[0] = 0;
    nilai[1] = 1;
    nilai[2] = 2;
    nilai[3] = 3;
    nilai[4] = 4;

    cout << "Addresnya adalah : " << &nilai[0] << " Nilainya adalah : " << nilai[0] << endl;
    cout << "Addresnya adalah : " << &nilai[1] << " Nilainya adalah : " << nilai[1] << endl;
    cout << "Addresnya adalah : " << &nilai[2] << " Nilainya adalah : " << nilai[2] << endl;
    cout << "Addresnya adalah : " << &nilai[3] << " Nilainya adalah : " << nilai[3] << endl;
    cout << "Addresnya adalah : " << &nilai[4] << " Nilainya adalah : " << nilai[4] << endl;

    // marubah nilai anggota array
    int *ptr = nilai;
    *(ptr + 2) = 6;

    nilai[3] = 7;

    cout << endl;
    cout << "Addresnya adalah : " << &nilai[0] << " Nilainya adalah : " << nilai[0] << endl;
    cout << "Addresnya adalah : " << &nilai[1] << " Nilainya adalah : " << nilai[1] << endl;
    cout << "Addresnya adalah : " << &nilai[2] << " Nilainya adalah : " << nilai[2] << endl;
    cout << "Addresnya adalah : " << &nilai[3] << " Nilainya adalah : " << nilai[3] << endl;
    cout << "Addresnya adalah : " << &nilai[4] << " Nilainya adalah : " << nilai[4] << endl;

    cout << endl;
    cout << "Ukuran arraynya adalah : " << sizeof(nilai) << endl;
    cout << "Jumlah member arraynya adalah : " << sizeof(nilai)/sizeof(int) << endl;

    cin.get();
    return 0;
}
