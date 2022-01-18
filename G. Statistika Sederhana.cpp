// link problem: https://tlx.toki.id/courses/basic/chapters/06/problems/G
#include <iostream>
using namespace std;

int main(){
    int x, n, mx, mn;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> x;
        if (i == 0){
            mn = x;
            mx = x;
        } else {
            if (x > mx){
                mx = x;
            }
            if (x < mn){
                mn = x;
            }
        }
    }
    cout << mx << " " << mn << endl;
}