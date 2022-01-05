#include <iostream>
using namespace std;

int main(){
    int A, B;
    char op;

    scanf("%d %s %d", &A, &op, &B);

    if (op == '>') {
        if (A > B){
            cout << "benar" << endl;
        } else {
            cout << "salah" << endl;
        }
    } else if (op == '<') {
        if (A < B){
            cout << "benar" << endl;
        } else {
            cout << "salah" << endl;
        }
    } else if (op == '='){
        if (A == A){
            cout << "benar" << endl;
        } else {
            cout << "salah" << endl;
        }
    } else if (op == '+') {
        cout << A + B << endl;
    } else if (op == '-') {
        cout << A - B << endl;
    } else if (op == '*') {
        cout << A * B << endl;
    }
    return 0;
}