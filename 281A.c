#include <stdio.h>

int main(){
    char a[1000];
    scanf("%s", &a);

    if(a[0] >= 'a' && a[0] <= 'z'){
        a[0] -= 32;
    }

    printf("%s", a);
}