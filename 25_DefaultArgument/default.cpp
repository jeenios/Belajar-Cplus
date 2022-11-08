#include <iostream>
using namespace std;

double volumeKubus (double p = 1, double l = 1, double t = 1);

int main (){
    cout << "Volumenya Adalah : " << volumeKubus(3,4,5) << endl;
    cout << "Volumenya Adalah : " << volumeKubus(3,4) << endl;
    cout << "Volumenya Adalah : " << volumeKubus(3) << endl;
    cout << "Volumenya Adalah : " << volumeKubus() << endl;
    return 0;
}

double volumeKubus (double p, double l, double t){
    return p*l*t;
}