// 3. Вывести строку задом наперёд, не меняя её

#include <stdio.h>

int main() {
    char stroka[] = "pomogite i spasite";
    char *p = stroka;
    
    while (*p) {
        p++;
    }

    while (p > stroka) {
        p--; 
        printf("%c", *p);
    }

    return 0;
}