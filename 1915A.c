#include <stdio.h>
#include <string.h>

int main(){
    int a;
    scanf("%d", &a);

    for(int i = 0; i < a; i++){
        char b, c, d;
        scanf("%c %c %c"), &b, &c, &d;

        if(strcmp(b, c) == 0){
            printf("%c\n", d);
        }
        else if(strcmp(b, d) == 0){
            printf("%c\n", c);
        }
        else{
            printf("%c\n", b);
        }
    }
}