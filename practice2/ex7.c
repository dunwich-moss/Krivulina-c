#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        int sq = i * i;
        if(sq > 50) printf("%d ", sq);
    }
    printf(" ");
}