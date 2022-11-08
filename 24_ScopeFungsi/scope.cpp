#include <iostream>
using namespace std;

// Variabel Global
int x = 10;

int ambilGlobal (){
    return x;
}

// Variabel Local
int ambilLocal(){
    x = 9;
    return x;
}

int main () {
    cout << "FUNGSI GLOBAL LOCAL DAN BLOCK SCOPE" << endl;
    cout << "1. Variabel Global : " << ambilGlobal() << endl;
    cout << "2. Variabel Global Unery : " << ::x << endl; // Unery || tetapi hanya bisa mengambil variabel diluar fungsi
    cout << "3. Variabel AmbilLocal : " << ambilLocal() << endl;
    int a = 5;
    cout << "4. Variabel Local : " << a << endl;
    // BlockScope
    {
        int b = 1;
        cout << "5. Variabel BlockScope : " << b << endl;
    }
    return 0;
}