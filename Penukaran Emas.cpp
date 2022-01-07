// link problem : https://tlx.toki.id/problems/osn-2009/2H
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if (n >= 12){
        cout << n/2 + n/3 + n/4 << endl;
    } else {
        cout << n << endl;
    }
}