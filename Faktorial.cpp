// link problem: https://tlx.toki.id/problems/osn-2006/A

#include <iostream>
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

    int banyak_nol = 0;
    while (N)
    {
        N /=5;
        banyak_nol += N;
    }
    cout << banyak_nol << endl;
}