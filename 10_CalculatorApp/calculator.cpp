#include <iostream>

using namespace std;

int main(){
    float a,b,hasil;
    char aritmatika;

    cout << "SELAMAT DATANG DI KALKULATOR OZZY JEENIOS \n \n";

    cout << "Masukan Nilai Pertama = ";
    cin >> a;
    cout << "Pilih Operator +,-,*,/ = ";
    cin >> aritmatika;
    cout << "Masukan Nilai Kedua = ";
    cin >> b;

    // if (aritmatika == '+'){
    //     hasil = (a+b);
    // } else if (aritmatika == '-'){
    //     hasil = (a-b);
    // } else if (aritmatika == '*'){
    //     hasil = (a*b);
    // } else if (aritmatika == '/'){
    //     hasil = (a/b);
    // } else {
    //     cout<< "Sepertinya Anda Keliru";
    // }

    switch (aritmatika)
    {
    case '+':
        hasil = (a+b);
        break;
    case '-':
        hasil = (a-b);
        break;
    case '*':
        hasil = (a*b);
        break;
    case '/':
        hasil = (a/b);
        break;
    default:
    cout << "Sepertinya anda keliru";
        break;
    }

    cout << "Hasilnya Adalah = " << hasil << endl;
    return 0;
}