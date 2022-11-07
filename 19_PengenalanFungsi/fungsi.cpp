#include <iostream>
#include <cmath>
using namespace std;

// Liblary cmath
// ceil(x) -> Pembulatan keatas
// cos(x) -> Cosinus
// exp(x) -> Eksponen
// fabs(x) -> Nilai absolute dalam float
// floor(x) -> Pembulatan kebawah
// fmod(x) -> Modulus dalam float
// log(x) -> Logaritma dengan basis natural
// log10(x) -> Logaritma dengan basis 10
// pow(x,y) -> x pangkat y
// sin(x) -> Sinus
// sqrt(x) -> Akar kuadrat
// tan(x) -> Tangen

int main() {
    int x;

    cout << "Masukan Akar Dari X = ";
    cin >> x;

    double y = sqrt(x);
    cout << "Akar Dari X Adalah " << y << endl;

    cin.get();
    return 0;
}