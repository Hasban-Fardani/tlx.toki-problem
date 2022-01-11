#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if (n >= 10000){
        cout << "puluhribuan" << endl;
    } else if(n >= 1000){
        cout << "ribuan" << endl;
    } else if(n >= 100){
        cout << "ratusan" << endl;
    } else if(n >= 10){
        cout << "puluhan" << endl;
    } else if(n >= 0){
        cout << "satuan" << endl;
    }
}