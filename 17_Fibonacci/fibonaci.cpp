#include <iostream>

using namespace std;

int main () {
    int n;
    int f_n;
    int f_n1 = 1;
    int f_n2 = 0;

    cout << "Deret Fibonacci" << endl;
    cout << "Masukan Angka ke_n ";
    cin >> n;
    f_n = f_n1 + f_n2;
    cout << f_n << endl;

    for (int i = 1; i < n; i++){
        f_n = f_n1 + f_n2;
        cout << f_n << endl;
    }

    cin.get();
    return 0;
    
}