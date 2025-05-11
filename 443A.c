#include <stdio.h>
#include <string.h>

int main(){
    char a[1001];
    gets(a);

    int len = strlen(a);
    int b[256] = {0};
    int diff = 0;

    for(int i = 0; i < len; i++){
        if(a[i] >= 'a' && a[i] <= 'z'){
            b[a[i]]++;
        }
    }

    for(int i = 0; i < 256; i++){
        if(b[i] != 0){
            diff++;
        }
    }

    printf("%d\n", diff);
}