#include <stdio.h>
#include <math.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
        for(j = 2; j*j<=n; j++) {
            while (n%j==0){
                printf("%d", &j);
                n/=j;
            }
        }
    return 0;
}