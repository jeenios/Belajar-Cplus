#include <iostream>

using namespace std;

int main() {
    // continue dan break di dalam for
    // for (int i = 1; i < 10; i++){

    //     if (i == 8){
    //         // continue;
    //         break;  
    //     }

    //     cout << i << endl;
    // }


    // continus dan break di dalam while
    int i = 0;
    while (i <= 10){
        i++;
        if (i == 5){
            // continue;
            break; 
        }
        cout << i << endl;
    }

    cin.get();
    return 0;
}