// link problem : https://tlx.toki.id/courses/basic/chapters/05/problems/D
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if (n > 0){
        cout << "positif" << endl;
    } else if (n < 0){
        cout << "negatif" << endl;
    } else {
        cout << "nol" << endl;
    }
}