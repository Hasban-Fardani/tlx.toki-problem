// link problem : https://tlx.toki.id/problems/ngoding-seru-2015-oct-pemula/E
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[3], n;
    for (int i=0; i<3; i++){
        cin >> arr[i];
    }
    cin >> n;
    sort(arr, arr + 3);
    if (n == 1){
        for (int i=0; i<3; i++){
            cout << arr[i];
        }
        cout << endl;
    } else {
        for (int i=2; i>=0; i--){
            cout << arr[i];
        }
        cout << endl;
    }
}