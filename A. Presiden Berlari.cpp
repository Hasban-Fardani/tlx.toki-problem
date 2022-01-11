// link problem : https://tlx.toki.id/contests/troc-25/problems/A
#include <iostream>
using namespace std;

int main(){
    unsigned long long int N, K, x;
    cin >> N >> K;
    x = 0;
    for (int i=0; i<N; i++){
        if (x % K == 0 and x > 1){
            x *= 2;
        } else {
            x += 1;
        }
    }
    cout << x << endl;
    // cout << K* << endl;
}