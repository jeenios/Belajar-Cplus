#include <iostream>
using namespace std;

int main () {
    int nilaiUSG [10] = {0,1,2,3,4,5,6,7,8,9};

    // tidak merubah array
    for (int nilai : nilaiUSG){
        cout << "Addresnya adalah " << &nilai << " Nilainya adalah " << nilai << endl;
    }

    cout << endl;
    
    // memanipulasi array dengan referensi
    for (int &nilaiRef : nilaiUSG){
        nilaiRef *= 2;
    }

    for (int &nilaiRef : nilaiUSG){
        cout << "Addresnya adalah " << &nilaiRef << " Nilainya adalah " << nilaiRef << endl;
    }

    cin.get();
    return 0;
}