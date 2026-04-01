#include <stdio.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n, su = 0, num;
    printf("Введите N: ");
    scanf("%d", &n);
    printf("Введите %d чисел: ", n);
    for( int i = 0; i<n; i++) {
        scanf("%d", &num);
        if(num<0)
            su+=num;
    }
    printf("%d", su);
    return 0;
}