// link problem : https://tlx.toki.id/courses/basic/chapters/06/problems/B
#include <iostream>
using namespace std;

int main(){
    int N, result;
    cin >> N; // yg tadi lupa pake ini ternyata T__T
    result = 0;
    for (int i=0; i<N; i++){
        int I;
        cin >> I;
        result += I;
    }
    cout << result << endl;
}