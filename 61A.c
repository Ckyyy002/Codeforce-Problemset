#include <stdio.h>
#include <string.h>
 
int main(){
    char a[101], b[101];
    gets(a);
    gets(b);
 
    int len = strlen(a);
    for(int i = 0; i < len; i++){
        if(a[i] != b[i]){
            printf("1");
        }
        else{
            printf("0");
        }
    }
}   