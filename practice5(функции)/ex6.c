#include <stdio.h>

void pr_arr(int arr[], int n){
    
    int x;
    for(int i=0; i<n; i++){
        scanf("%d", &x);
        arr[i] = x;

    }
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}
int main(){

    int k;
    scanf("%d", &k);
    int arr1[k];
    pr_arr(arr1, k);
}