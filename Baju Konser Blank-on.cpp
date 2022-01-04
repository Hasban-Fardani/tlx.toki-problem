// link problem : https://tlx.toki.id/problems/ngoding-seru-2015-oct-pemula/F

#include <iostream>
using namespace std;

int main(){
    int B, P, L;
    cin >> B >> P >> L;

    if (B <= 10 and P <= 40 and L <= 90) {
        cout << "S" << endl;
    } else if (B <= 14 and P <= 60 and L <= 120){
        cout << "M" << endl;
    } else if (B <= 18 and P <= 80 and L <= 180) {
        cout << "L" << endl;
    }  else {
        cout << "X" << endl;
    }
}