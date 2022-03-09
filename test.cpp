#include <iostream>
using namespace std;

int f(int x, int y){
    if (x==0 || y == 0){
        return 1;
    } else {
        return f(x-1, y) + f(x, y-1);
    }
}

// int g(int x, int y){
//     if(x==0){
//         return 1;
//     } else {
//         return g(x-1, y) + f(x, y);
//     }
// }

int sungai(int a, int b) {
  int ret = 0;
  int i = 0;
  while (i < b) {
    ret += a;
    i++;
  }
  return ret;
}

int main() {
  for (int i = 1; i <= 1; i++) {
    cout << "test" << endl;
  }
}