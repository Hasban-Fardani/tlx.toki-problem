// link problem : https://tlx.toki.id/problems/ngoding-seru-2015-oct-pejuang/B
#include <iostream>
using namespace std;

int main() {
    int detik, menit, jam;
    cin >> detik;

    menit = detik / 60;
    detik = detik % 60;

    jam = menit / 60;
    menit = menit % 60;

    cout << jam << endl;
    cout << menit << endl;
    cout << detik << endl;
}