#include <iostream>
using namespace std;

int N, modus, banyak=0;

int main(){
    cin >> N;
    int data[N];

    for (int i=0; i<N; i++) {
        cin >> data[i];
    }
    
    for (int i=0; i<N; i++){
        int freq=1;
        if (data[i] > 0) {
            for (int j=i+1; j<N; j++) {
                if (data[i] == data[j]) {
                    freq++;
                    data[j] = 0;
                }
            }
        }

        if (freq > banyak) {
            banyak = freq;
            modus = data[i];
        } else if (freq==banyak) {
            if (data[i] > modus) {
                modus = data[i];
            }
        }
        
    }
    cout << modus << endl;
    return 0;
}