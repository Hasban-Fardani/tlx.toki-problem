// link problem: https://tlx.toki.id/courses/basic/chapters/06/problems/D
#include <iostream>
using namespace std;

int main(){
    int N, result;
    result = 0;
    while (cin >> N)
    {
        result += N;
    }
    cout << result << endl;
}