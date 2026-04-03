#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, idx, val;
    scanf("%d", &n);
    int *a = malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    scanf("%d %d", &idx, &val);
    
    a = realloc(a, (n+1) * sizeof(int));
    for(int i = n; i > idx; i--){
        a[i] = a[i-1];
    }
    a[idx] = val;
    
    for(int i = 0; i < n+1; i++){
         printf("%d ", a[i]);
    }
    printf("\n");
    
    free(a);
}