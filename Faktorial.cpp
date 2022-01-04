// link problem: https://tlx.toki.id/problems/osn-2006/A

#include <iostream>
#include <string>
using namespace std;

int faktorial(int n){
    if (n == 0){
        return 1;
    } else {
        return n * faktorial(n-1);
    }
}

int main() {
    int N;
    cin >> N;

    int f = faktorial(N);
    int banyak_nol = 0;

    while (f >= 1){
        if (f % 10 == 0){
            banyak_nol++;
            f/=10;
        } else {
            break;
        }
    }
}