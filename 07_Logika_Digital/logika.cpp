#include <iostream>

using namespace std;

int main () {
    int a = 5;
    int b = 7;
    int hasil;

    // operator logika not, and, or

    //not
    hasil = !(a = 5);

    //and
    cout << "HASIL AND" << endl;
    hasil = (a == 5) && (b == 7);
    cout << hasil << endl; 
    
    //or
    cout << "HASIL OR" << endl;
    hasil = (a == 5) || (b == 7);
    cout << hasil << endl; 

    cin.get();
    return 0;
}