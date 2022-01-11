// link problem: https://tlx.toki.id/contests/troc-25/problems/B
#include <iostream>
using namespace std;

int main(){
    unsigned long long int N, F, D, temp_s;
    cin >> N >> F >> D;
    temp_s = 0;
    for (int i=0; i<=N; i++){
        if (D != 0){
            D -= temp_s;
        } else {
            break;
        }
        if (temp_s <= F+1){
            temp_s += 1;
        }
        if (i == N-1){
            temp_s = F;
        }
    }
    if (D == 0){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}