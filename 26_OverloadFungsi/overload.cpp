#include <iostream>
using namespace std;

// basic fungsi
int luasPersegi(int p, int l){
    return p*l;
}

// overload fungsi (asal nama fungsinya sama)
int luasPersegi(int sisi){
    return sisi * sisi;
}

double luasPersegi (double sisi){
    return sisi * sisi;
}

int main (){
    cout << "Luas Basic : " << luasPersegi(3,4) <<endl; 
    cout << "Luas Overload : " << luasPersegi(3) <<endl; 
    cout << "Luas Overload : " << luasPersegi(2.5) <<endl; 
    return 0;
}