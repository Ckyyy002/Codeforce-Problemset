#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    scanf("%s", str);
    char output[101];
    int j = 0;

    for(int i = 0; i < strlen(str); i++) {
        if(str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U' &&
           str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
           str[i] != 'Y' && str[i] != 'y') {

            if(str[i] >= 'A' && str[i] <= 'Z') {
                str[i] = str[i] + 32;
            }
            output[j++] = str[i];
        }
    }

    for(int i = 0; i < j; i++) {
        printf(".%c", output[i]); 
    }
}