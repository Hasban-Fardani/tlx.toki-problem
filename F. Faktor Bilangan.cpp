// link problem: https://tlx.toki.id/courses/basic/chapters/06/problems/F
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i=n; i>0; i--){
        if(n%i == 0){
            cout << i << endl;    
        }
    }
}