#include <stdio.h>
#include <string.h>

int main() {
    char str1[101];
    char str2[101];
    int yes = 0;

    scanf("%s %s", str1, str2);
    if(strlen(str1) != strlen(str2)) {
        printf("NO\n");
        yes = 1;
    }
    else {
        for(int i = 0; i < strlen(str1); i++) {
            if(str1[i] != str2[strlen(str2) - 1 - i]) {
                printf("NO\n");
                yes = 1;
                break;
            }
        }
    }

    if(yes == 0) {
        printf("YES\n");
    }
}