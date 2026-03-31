#include <stdio.h>
#include <string.h>
int polina(char str[]){
    int k;
    k = strlen(str);
    char anti_str[k];
    char *ptr = str;
    for (*ptr; *ptr!='\0'; ptr++ );
    
    for (*ptr; *ptr!='\0'; ptr-- ){
        anti_str[k]=*ptr;
    }
    if(str==anti_str){
        printf("POlina obobryaet");
    }
    else printf("nope");

}
int main(){
    
    char str1[]="abba";

    polina(str1);
}