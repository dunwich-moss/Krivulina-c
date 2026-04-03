#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int *a = malloc(n * sizeof(int));
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    
    int mx = a[0], mn = a[0];
    long long s = 0;
    for (i = 0; i < n; i++) {
        if (a[i] > mx) mx = a[i];
        if (a[i] < mn) mn = a[i];
        s += a[i];
    }
    
    printf("Max: %d\nMin: %d\nSum: %lld\n", mx, mn, s);
    free(a);
}