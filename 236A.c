#include <stdio.h>

int main(){
    int a;
    scanf("%d\n", &a);
    char b[a];
    gets(b);
    int sama = 0;

    for(int i = 0; i < a - 1; i++){
        if(b[i] == b[i+1]){
            sama++;
        }
    }

    printf("%d", sama);
}