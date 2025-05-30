#include <stdio.h>
#include <string.h>

int main() {
    char str[2];
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%s", str);
        int count = 0;
        for(int j = 0; j < 2; j++) {
            if(str[j] == '0') {
                continue;
            }
            if(str[j] == '1') {
                count++;
            }
            if(str[j] == '2') {
                count += 2;
            }
            if(str[j] == '3') {
                count += 3;
            }
            if(str[j] == '4') {
                count += 4;
            }
            if(str[j] == '5') {
                count += 5;
            }
            if(str[j] == '6') {
                count += 6;
            }
            if(str[j] == '7') {
                count += 7;
            }
            if(str[j] == '8') {
                count += 8;
            }
            if(str[j] == '9') {
                count += 9;
            }
        }

        printf("%d\n", count);
    }
}