#include <stdio.h>

int main() {
    int min, max, val, i;
    scanf("%d", &val);
    int m[val];
    for (i=0; i<val; i++){
        scanf("%d", &m[i]);
    }

    max = m[0];
    for(i=1; i<val; i++){
        if (m[i]>max)
            max = m[i];

    }
    min =m[0];
    for(i=1; i<val; i++){
        if (m[i]<min)
            min = m[i];
    }
    printf("%d %d", max, min);
    return 0;
}