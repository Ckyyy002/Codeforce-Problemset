#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    scanf("%s", str);

    int change1 = 1, change2 = 1;
    int len = strlen(str);
    if(str[0] >= 'a' && str[0] <= 'z') {
        for(int i = 1; i < len; i++) {
            if(str[i] >= 'a' && str[i] <= 'z') {
                change1 = 0;
                change2 = 0;
                break;
            }
        }
        change2 = 0;
    }
    else {
        for(int i = 0; i < len; i++) {
            if(str[i] >= 'a' && str[i] <= 'z') {
                change1 = 0;
                change2 = 0;
                break;
            }
        }
        change1 = 0;
    }
    
    if(change1) {
        if(str[0] >= 'a' && str[0] <= 'z') {
            str[0] -= 32;
        }
        for(int i = 1; i < len; i++) {
            if(str[i] >= 'A' && str[i] <= 'Z') {
                str[i] += 32;
            }
        }
    }
    else if(change2) {
        for(int i = 0; i < len; i++) {
            if(str[i] >= 'A' && str[i] <= 'Z') {
                str[i] += 32;
            }
        }
    }

    printf("%s\n", str);
}