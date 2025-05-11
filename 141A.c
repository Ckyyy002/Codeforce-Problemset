#include <stdio.h>
#include <string.h>

int main(){
    char str1[101], str2[101], str3[101];
    int a[256] = {0};
    int b[256] = {0};
    gets(str1);
    gets(str2);
    gets(str3);

    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int len3 = strlen(str3);

    int same = 1;

    if(len1 + len2 != len3){
        same = 0;
    }

    for(int i = 0; i < len1; i++){
        a[str1[i]]++;
    }

    for(int i = 0; i < len2; i++){
        a[str2[i]]++;
    }

    for(int i = 0; i < len3 ; i++){
        b[str3[i]]++;
    }

    for(int i = 0; i < 256; i++){
        if(a[i] != b[i]){
            same = 0;
            break;
        }
    }

    if(same){
        printf("YES");
    }
    else{
        printf("NO");
    }
}