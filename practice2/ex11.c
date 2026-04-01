#include <stdio.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    int n, count = 0, num;
    printf("Введите N: ");
    scanf("%d", &n);
    
    printf("Введите %d чисел: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &num);
        if(num > 0) count++;
    }
    printf("Положительных чисел: %d", count);
    return 0;
}