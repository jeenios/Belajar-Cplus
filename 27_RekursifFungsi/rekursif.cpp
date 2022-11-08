#include <iostream>
using namespace std;

// fungsi rekursif terbatas
int pangkatIterasi (int a, int b){
    int hasil = a;
    for (int i = 1; i < b; i++){
        hasil = hasil * a;
    }
    return hasil;
}

// fungsi rekursif
int pangkatRekursif (int a, int b){
    if (b <= 1){
        return a;
    } else {
        return a * pangkatRekursif (a,(b - 1));
    }
}

int main (){
    int a;
    int b;

    cout << "Masukan Angka : ";
    cin >> a;
    cout << "Masukan Pangkat : ";
    cin >> b;
    cout << "Hasil Iterasi Adalah : " << pangkatIterasi(a,b) << endl;
    cout << "Hasil Rekursif Adalah : " << pangkatRekursif(a,b) << endl;

    return 0;
}