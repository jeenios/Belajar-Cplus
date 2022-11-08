#include <iostream>
using namespace std;

int fibCoba (int n);

int main () {
    int input, hasil;
    cout << "Coba hitung fibonacci ini : ";
    cin >> input;
    hasil = fibCoba(input);
    cout << "Hasilnya Adalah : " << hasil << endl;
    cin.get();
    return 0;
}

int fibCoba (int n){
    cout << "Nih yang di hitung :" << n << endl;
    if ((n == 0)||(n == 1)){
        return n;
    } else {
        return fibCoba(n-1)+fibCoba(n-2);
    }
}