#include <iostream>
#include <array>
using namespace std;

// ini yang lain
void gabungArray (int *ptrArray, int baris, int kolom){
    int index = 0;
    for (int i = 0; i < baris; i++){
        cout << "[ ";
        for (int i = 0; i < kolom; i++){
            cout << *(ptrArray + index) << " ";
            index++;
        }
        cout << "]" << endl;
    }
}

int main () {
    const int baris = 2;
    const int kolom = 2;
    int arrayMD[baris] [kolom] = {1,2,3,4};

    gabungArray(*arrayMD, baris, kolom);
    cin.get();
    return 0;
}

// ini yang menggunakan standard liblary
// const int baris = 2;
// const int kolom = 2;
// void gabungstdArray (array < array <int, kolom> , baris> &nilaiArray){
//     for (array < array <int, kolom> vectorBaris : nilaiArray){
//         cout << "[ ";
//         for (int nilaiKolom : vectorBaris){
//             cout << nilaiKolom << " ";
//         }
//         cout << "]" << endl;
//     }
// }

// int main () {
//     array < array <int,kolom> , baris> nilaiMD = {0,1,2,3,4,5};

//     gabungstdArray(nilaiMD);
//     cin.get();
//     return 0;
// }