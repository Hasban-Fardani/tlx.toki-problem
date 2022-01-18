// link problem: https://tlx.toki.id/courses/basic/chapters/06/problems/H
#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    for (int i=1; i<=a; i++){
        if (i<a){
            if (i % b == 0 and i >= b){
                cout << "* ";
            } else {
                cout << i << " ";
            }
        } else {
            if (i % b == 0 and i >= b){
                cout << "*\n";
            } else {
                cout << i << "\n";
            }
        }
    }

}