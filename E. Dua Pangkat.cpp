// link problem: https://tlx.toki.id/courses/basic/chapters/06/problems/E
#include <iostream>
using namespace std;

bool is_dua_pangkat(int N){
    while(N>1 and N%2==0){
        N/=2;
    }
    if (N == 1){
        return true;
    } else {
        return false;
    }
}
int main(){
    int N;
    cin >> N;
    if (is_dua_pangkat(N)){
        cout << "ya" << endl;
    } else {
        cout << "bukan" << endl;
    }
}