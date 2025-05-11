#include <stdio.h>
#include <string.h>

int main(){
    int a, b;
    scanf("%d %d\n", &a, &b);

    char c[51];
    scanf("%s", &c);

    int len = strlen(c);

    for(int j = 0; j < b; j++){
        for(int i = 0; i < len; i++){
            if(c[i] == 'B' && c[i+1] == 'G'){
                char temp = c[i];
                c[i] = c[i+1];
                c[i+1] = temp;
                i++;
            }
        }
    }

    printf("%s", c);
}