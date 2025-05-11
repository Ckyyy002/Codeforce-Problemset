#include <stdio.h>
#include <string.h>
 
int main(){
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    int len = strlen(a);
 
    for(int i = 0; i < len; i++){
        if(a[i] >= 'A' && a[i] <= 'Z'){
            a[i] += 32;
        }
        if(b[i] >= 'A' && b[i] <= 'Z'){
            b[i] += 32;
        }
    }
 
    if(strcmp(a, b) == -1){
        printf("-1");
    }
    else if(strcmp(a, b) == 0){
        printf("0");
    }
    else{
        printf("1");
    }
}