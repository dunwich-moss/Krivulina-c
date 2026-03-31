#include <stdio.h>

int main() {
    int sum = 0, val, n, i;
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d", &val);
        arr[i]=val;
    }
    for(i=0; i<n; i++){
        sum+=arr[i];
    }
    printf("%d", sum);
    return 0;

}