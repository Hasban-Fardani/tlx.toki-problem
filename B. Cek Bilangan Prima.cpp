#include <iostream>
#include <cmath>
using namespace std;

int i, j, n, bilangan, p=1;
int main(){
    cin >> n;
    for (i=0; i<n; i++){
        cin >> bilangan;
        for (j=2; j<=trunc(sqrt(bilangan)); j++){
            if (bilangan % j == 0){
                p = 0;
            } else {
                p = 1;
            }
        }
        if (p==0 || bilangan == 1){
            cout << "BUKAN\n";
            p = 1;
        } else {
            cout << "IYA\n";
        }
    }
    
}