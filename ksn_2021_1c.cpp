#include <iostream>
using namespace std;

int main(){
    int T, N, Q;
    cin >> T >> N >> Q;
    if(T==1){
        for (int i=0; i<Q; i++){
            cout << "? " << 1 << " " << N << endl << flush;
        }
        
    }
}