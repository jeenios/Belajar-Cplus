#include <iostream>
using namespace std;

void fungsi (int *);
void kuadrat (int *);

int main () {
    int a = 5;

    fungsi(&a);
    cout << " nilainya adalah : " << a << endl;
    cout << "alamatnya adalah : " << &a << endl << endl;

    kuadrat(&a);
    cout << "nilai kuadratnya adalah : " << a << endl;

    cin.get();
    return 0;
}

void fungsi (int *b){
    cout << " nilainya adalah : " << *b << endl;
    cout << "alamatnya adalah : " << b << endl;
}

void kuadrat (int *valPtr){
    *valPtr = *valPtr * *valPtr;
}