// link problem: https://tlx.toki.id/courses/basic/chapters/07/problems/C
#include <iostream>
using namespace std;

int main(){
    int n, I=0;
    cin >> n;
    for (int i=0; i<n; i++){
        for (int j=0; j<=i; j++){
            cout << I;
            I++;
            if(I==10) I=0;
        }
        cout << "\n";
    }
}