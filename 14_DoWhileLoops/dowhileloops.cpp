#include <iostream>

using namespace std;

int main () {

    int a = 1;

    do{
        cout << "Ozzy";
        cout << a << endl;
        a++;
    } while (a < 10);
    
    cout << "Selesai";
    cin.get();
    return 0;
}