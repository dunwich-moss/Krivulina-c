#include <stdio.h>

int main() {
    int n, i, j, rows;
    scanf("%d", &n);
    rows =n;
    for(i=0; i<rows; i++) {
        n = n-1;
        for(j=0; j<n; j++) {

            printf("*");
        }
        printf("\n");
    }
}