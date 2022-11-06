#include <iostream>

using namespace std;

// Jangan Masuk Informatika Jurusan Paling Sulit

int main () {
    cout << "\n Pemantapan Logika 1 \n";
    for (int i = 1; i < 10; i++){
        cout << i << endl; 
    }   
    cout << "\n Pemantapan Logika 2 \n";
    for (int i = 1; i <= 10; i+=2){
        cout << i << endl; 
    }   
    cout << "\n Pemantapan Logika 3 \n";
    for (int i = 1; i >= -10; i--){
        cout << i << endl; 
    }   
    cout << "\n Pemantapan Logika 4 \n";
    int counter = 0;
    for (int i = 1; i <= 10; i += counter, i++){
        cout << i << " " << counter << endl; 
    }   
}