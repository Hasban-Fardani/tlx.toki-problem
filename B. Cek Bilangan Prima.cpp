#include <stdio.h>
#include <cmath>

int main() {
    int b, n, flag = 0;
    scanf("%d", &b);
    for (int i=0; i<b; i++){
        scanf("%d", &n);

        if (n == 0 || n == 1){
            flag = 1;
        }

        for (int j = 2; j <= sqrt(n); j++) {
            if (n % j == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            printf("YA\n");
        } else {
            printf("BUKAN\n");
        }
    flag = 0;
  }

  return 0;
}