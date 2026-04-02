#include <stdio.h>
void inc_arr(int arr[], int n){
    int x;
    for(int i=0; i<n; i++){
        scanf("%d", &x);
        arr[i] = x;

    }
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}