#include <iostream>

using namespace std;

int main () {
    int a;

    cout << "Masukan nilai = ";
    cin >> a;

    switch (a){
    case 1:
        cout << "Nilai yang anda masukan adalah 1" << endl;
        break;
    case 2:
        cout << "Nilai yang anda masukan adalah 2" << endl;
        break;
    case 3:
        cout << "Nilai yang anda masukan adalah 3" << endl;
        break;
    case 4:
        cout << "Nilai yang anda masukan adalah 4" << endl;
        break;
    case 5:
        cout << "Nilai yang anda masukan adalah 5" << endl;
        break;
    default:
        cout << "Nilai yang anda masukan bukan 5,4,3,2,1" << endl;
        break;
    }
    return 0;
}