#include <stdio.h>

int main() {
    int sum=0, n, i, val, calc;
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d", &val);
        arr[i]=val;
    }
    for(i=0;i<n;i++){
        sum+=arr[i];

    }
    calc = sum/n;
    printf("%d", calc);
    return 0;
    
}