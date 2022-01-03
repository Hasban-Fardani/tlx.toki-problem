// link problem : https://tlx.toki.id/problems/osn-2010/2E

#include <iostream>
using namespace std;

int fpb (int x, int y) {
    if (y == 0){
        return x;
    } else {
    return fpb(y, x % y);
    }
}

int main () {
    int n, k, other;
    cin >> n;
    cin >> k;
    for (int i=0; i < n - 1; i++) {
        cin >> other;
        k = k / fpb(k, other) * other;
    }
    cout << k << endl;
}