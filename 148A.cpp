#include <stdio.h>

int main() {
    int k, l, m, n, d;
    scanf("%d %d %d %d %d", &k, &l, &m, &n, &d);

    int dragon[d];
    for (int i = 0; i < d; i++) {
        dragon[i] = i + 1;
    }

    for (int i = 0; i < d; i++) {
        if (dragon[i] % k == 0 || dragon[i] % l == 0 || dragon[i] % m == 0 || dragon[i] % n == 0) {
            dragon[i] = 0;
        }
    }

    int count = 0;
    for (int i = 0; i < d; i++) {
        if (dragon[i] != 0) {
            count++;
        }
    }
    
    printf("%d\n", d - count);
    return 0;
}