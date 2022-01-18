#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i=n; i>0; i--){
        for(int k=n-i; k<n-1; k++){
            cout << " ";
        }
        for (int j=i; j<=n; j++){
            cout << "*";
        }
        cout << endl;
    }
}