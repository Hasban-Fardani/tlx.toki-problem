#include <iostream>
using namespace std;

int abs(int n){
    if (n < 0){
        return -1*n;
    } else {
        return n;
    }
}

int main(){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2; 
    cout << abs(x1 - x2)+abs(y1 - y2) << endl;
}