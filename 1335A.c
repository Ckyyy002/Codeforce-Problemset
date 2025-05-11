#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        long long a;
        scanf("%lld", &a);

        if (a == 1 || a == 2) {
            printf("0\n");
        } 
        else if (a == 3) {
            printf("1\n");
        } 
        else {
            long long answer = a / 2;
            if(a % 2 == 0) {
                printf("%lld\n", --answer);
            } 
            else {
                printf("%lld\n", answer);
            }
        }
    }

    return 0;
}