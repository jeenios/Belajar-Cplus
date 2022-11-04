#include <iostream>
#include <limits> //jika ingin melihat nilai max integer

using namespace std;

int main (){
    // bilangan bulat
    unsigned int a=1;
    long b=5;
    short c=7;

    // bilangan desimal
    float d = 0.1;
    double e = 2.5;

    // charakter
    char f = 'a';

    // boolean
    bool g = false;


    cout << a << endl;
    cout << sizeof(a) << " byte" << endl;
    cout << numeric_limits<unsigned int>::max() << endl;
    cout << numeric_limits<unsigned int>::min() << endl;

    cin.get();
    return 0;
}