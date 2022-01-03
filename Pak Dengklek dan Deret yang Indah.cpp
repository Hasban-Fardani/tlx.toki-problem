// link problem : https://tlx.toki.id/problems/ngoding-seru-2015-oct-pemula/D

#include <iostream>
using namespace std;

int main() {
    int S0, N, D;
    cin >> S0 >> N >> D;
    for(int i=0; i < N; i++) {
        cout << S0 << endl;
        S0 += D;
    }
}