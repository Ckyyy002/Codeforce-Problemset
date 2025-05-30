#include <stdio.h>
#include <string.h>

int main() {
    char str[101];

    scanf("%s", str);
    int yes1 = 0, yes2 = 0, yes3 = 0, yes4 = 0, yes5 = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'h') {
            yes1 = 1;
            for(int j = i + 1; j < strlen(str); j++) {
                if (str[j] == 'e') {
                    yes2 = 1;
                    for (int k = j + 1; k < strlen(str); k++) {
                        if (str[k] == 'l') {
                            yes3 = 1;
                            for (int l = k + 1; l < strlen(str); l++) {
                                if (str[l] == 'l') {
                                    yes4 = 1;
                                    for (int m = l + 1; m < strlen(str); m++) {
                                        if (str[m] == 'o') {
                                            yes5 = 1;
                                            break;
                                        }
                                    }
                                    break;
                                }
                            }
                            break;
                        }
                    }
                    break;
                }
            }
        }
    }

    if (yes1 && yes2 && yes3 && yes4 && yes5) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}