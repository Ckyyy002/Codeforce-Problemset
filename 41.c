#include <stdio.h>
#include <string.h>
 
int main(){
    char a[101], b[101];
    scanf("%s %s", &a, &b);
 
    int len1 = strlen(a);
    int len2 = strlen(b);
    int flip = 1;
 
    if(len1 != len2){
        flip = 0;
    }
    else{
        for(int i = 0; i < len1; i++){
            if(a[i] != b[len1 - 1 - i]){
                flip = 0;
                break;
            }
        }
    }
 
    if(flip){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}