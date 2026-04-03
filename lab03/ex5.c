#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, idx;
    scanf("%d", &n);
    int *a = malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    scanf("%d", &idx);
    
    for(int i = idx; i < n-1; i++){
         a[i] = a[i+1];
    }

    a = realloc(a, (n-1) * sizeof(int));
    
    for(int i = 0; i < n-1; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    
    free(a);
}