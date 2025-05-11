#include <stdio.h>
#include <string.h>

int main(){
    char a[201];
    scanf("%s", &a);

    int len = strlen(a);

    for(int i = 0; i < len; i++){
        if(a[i] == '.'){
            printf("0");
        }
        else if(a[i] == '-'){
            if(a[i+1] == '.'){
                printf("1");
            }
            else{
                printf("2");
            }
            i++;
        }
    }
}