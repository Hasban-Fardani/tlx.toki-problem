// link problem : https://tlx.toki.id/problems/troc-18/A
#include <iostream>
using namespace std;

int main(){
    short N;
    cin >> N;

    if (N < 7 and (N==2 or N==3 or N==5)){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
