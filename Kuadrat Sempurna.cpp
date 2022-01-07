// https://tlx.toki.id/problems/osn-2009/2A
#include <iostream>
using namespace std;

bool is_prime(int n){
    if (n >= 2){
        for (int i=2; i<n; i++){
            if (n%i==0){
                return false;
            }
        return true;
        }
    }
    return false;
}

int * faktor_prima(int n){
    int * faktor, index=0;
    if (n >=2){
        for (int i=2; i<=n; i++){
            if (n%i == 0 and is_prime(i)){
                faktor[index] = i;
                index++;
            }
        }
    }
    return faktor;
}

int get_KS(int n){

}

int main(){
    int N;
    cin >> N;
    cout << is_prime(N) << endl;
}
