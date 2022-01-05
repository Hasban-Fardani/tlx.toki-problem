// link problem : https://tlx.toki.id/problems/ngoding-seru-2015-oct-pemula/C

#include <iostream>
using namespace std;

int main() {
    int N, temp=0;
    cin >> N;
    int A[N-1], R_A[N-1];
    for (int i=0; i < N; i++){
        cin >> A[i];
    }
    for (int i=N-1; i>=0; i--){
        R_A[temp] = A[i];
        temp++;
    }
    for (int i=0; i < N-1; i++){
        cout << R_A[i] << ",";
    }
    cout << R_A[N-1] << endl;
}