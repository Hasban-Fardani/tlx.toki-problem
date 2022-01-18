
#include <iostream>
using namespace std;

int main(){
    int  Q, x=0, t=0;
    cin >> Q;
    for (int i=0; i<Q; i++){
        cin >> t;
        x++;
        if (x==t){
            cout << "BENAR\n" << flush;
        } else {
            cout << "SALAH\n" << flush;
            x=0;
        }
    }
}
