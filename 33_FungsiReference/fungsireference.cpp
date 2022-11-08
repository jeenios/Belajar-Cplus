#include <iostream>
using namespace std;

void fungsi (int &b){
    cout << " nilainya adalah : " << b << endl;
    cout << "alamatnya adalah : " << &b << endl;
}

void kuadrat (int &nilaiRef){
    nilaiRef = nilaiRef * nilaiRef;
}

int main () {
    int a = 3;

    // fungsi(a);
    cout << " nilainya adalah : " << a << endl;
    cout << "alamatnya adalah : " << &a << endl;

    kuadrat(a);
    cout << " nilainya adalah : " << a << endl;

    cin.get();
    return 0;
}