#include <iostream>
using namespace std;

int kuadrat (int x){
    int y;
    y = x * x;
    return y;
}

int tambah (int a, int b){
    int c;
    c = a + b;
    return c;
}

int main (){
    int input, hasil, a, b, hasil2;

    cout << "OZZY SCHOOL \n \n";

    cout << "KUADRAT DARI : ";
    cin >> input;

    hasil = kuadrat(input); // hasilnya block scope

    cout << "KUADRAT DARI " << input << " ADALAH " << hasil << endl << endl;

    cout << "MASUKAN NILAI PERTAMA = ";
    cin >> a;
    cout << "MASUKAN NILAI KEDUA = ";
    cin >> b;

    hasil2 = tambah(a,b); // hasilnya block scope

    cout << "HASILNYA ADALAH " << hasil2 << endl;

    return 0;
}