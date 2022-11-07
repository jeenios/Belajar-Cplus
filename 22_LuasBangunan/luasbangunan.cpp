#include <iostream>
using namespace std;

double hitung_luas (double p, double l) {
    double luas = p + l;
    return luas;
}

double hitung_keliling (double p, double l){
    double keliling = 2 * (p + l);
    return keliling;
}

void tampilkan_luas (double p, double l){
    cout << "Luasnya adalah : ";
    cout << hitung_luas(p,l) << endl;
}

void tampilkan_keliling (double p, double l){
    cout << "Kelilingnya adalah : ";
    cout << hitung_keliling(p,l) << endl;
}   

int main () {
    double panjang, lebar;

    cout << "Masukan Panjang : ";
    cin >> panjang;
    cout << "Masukan Lebar : ";
    cin >> lebar;

    tampilkan_luas(panjang,lebar);
    tampilkan_keliling(panjang,lebar);

    cin.get();
    return 0;
}