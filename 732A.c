#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int count = 1, x = n;
    while (1){
        if (x % 10 == 0 || x % 10 == m) {
            break;
        }
        x += n;
        count++;
    }

    printf("%d\n", count);
}