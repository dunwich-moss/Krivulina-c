#include <stdio.h>

struct rectangle{
    int height;
    int width;
};
void ploshad(struct rectangle rect){
    int pl = rect.height*rect.width;
    printf("%d\n", pl);
}
void perimetr(struct rectangle rect){
    int pr = 2*(rect.height + rect.width);
    printf("%d\n", pr);
}

int main(){
    struct rectangle rect;
    scanf("%d", &rect.height);
    scanf("%d", &rect.width);
    ploshad(rect);
    perimetr(rect);
}


