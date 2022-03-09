#include <iostream>
using namespace std;

int I;
int fac(int N){
    if (N <= 1) return 1;
    else if(N%2==0) return N/2*fac(N-1);
    else return N * fac(N-1);
}

int main(){
    cin >> I;
    cout << fac(I) << endl;
}