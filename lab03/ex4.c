#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int *a = malloc(n * sizeof(int));

    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    
    int m;
    scanf("%d", &m);
    a = realloc(a, m * sizeof(int));

    for(int i=n; i<m; i++){
        scanf("%d", &a[i]);
    }

    for(int i=0; i<m; i++){
        printf("%d ", a[i]); 
        printf("\n");
    }
    
    int k;
    scanf("%d", &k);
    a = realloc(a, k * sizeof(int));
    for(int i=0; i<k; i++){
        printf("%d ", a[i]);
        printf("\n");
    }
    
    free(a);
}