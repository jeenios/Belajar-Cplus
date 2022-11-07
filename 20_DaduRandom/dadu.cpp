#include <iostream>
#include <cstdlib>

using namespace std;

int main (){
    char lanjut;

    while (true){
        cout << "Lempar Dadu? (y/n)";
        cin >> lanjut;

        if (lanjut == 'y'){
            cout << 1 + (rand() % 6) << endl;
        } else if (lanjut == 'n'){
            break;
        } else {
            cout << "Ketikan y atau n!" << endl;
        }
    }
    return 0;
}