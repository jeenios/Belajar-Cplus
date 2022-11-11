#include <iostream>
#include <array>
using namespace std;

int main(){
    array <int, 5> nilai;
    for (int i = 0; i <= 4; i++){
        nilai[i]=i;
        cout << "nilai [" << i << "] = " << nilai[i];
        cout << " Adressnya adalah = " << &nilai[i] << endl;
    }

    cout << endl;
    // mengukur nilai array
    cout << "Ukurannya adalah = " << nilai.size() << endl;
    // addres awal dari array
    cout << "Address awal adalah = " << nilai.begin() << endl;
    // nilai dengan index
    cout << "Nilai kedua adalah = " << nilai.at(2) << endl; 

    return 0;
}
