#include <iostream>
using namespace std;

double hitung_luas(double p, double l);
void printn(double x);

int main () {
    double panjang, lebar, luas;
    cout << "Masukan Nilai : " << endl;
    cin >> panjang;
    cin >> lebar;

    luas = hitung_luas(panjang,lebar);

    printn(luas);

    cin.get();
    return 0;
}

double hitung_luas(double p, double l){
    return p * l;
}

void printn(double x){
    cout << "Hasilnya adalah " << hitung_luas << x << endl;
}
