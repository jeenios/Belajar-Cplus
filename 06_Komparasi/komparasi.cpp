#include <iostream>

using namespace std;

int main () {
    int a = 2;
    int b = 2; 

    bool hasil1, hasil2;

    hasil1 = (a == b);
    hasil2 = (a != b);

    hasil1 = (a < b);
    hasil2 = (a > b);

    hasil1 = (a <= b);
    hasil2 = (a >= b);

    cout << hasil1 << endl;
    cout << hasil2 << endl;

    cin.get();
    return 0;
}