#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    gets(a);

    int len = strlen(a);

    for(int i = 0; i < len; i++){
        for(int j = 0; j < len - 2; j += 2){
            if((a[j] >= '1' && a[j] <= '9') && a[j] > a[j+2]){
                char temp = a[j];
                a[j] = a[j+2];
                a[j+2] = temp;
            }
        }
    }

    printf("%s", a);
}