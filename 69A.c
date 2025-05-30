#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int m = 3 * n;
    int a[m];

    for (int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    int x = 0, y = 0, z = 0;
    for(int i = 0; i < 3; i++) {
        if(i == 0) {
            for(int j = 0; j < m; j += 3) {
                x += a[j];
            }
        }
        if(i == 1) {
            for(int j = 1; j < m; j += 3) {
                y += a[j];
            }
        }
        if(i == 2) {
            for(int j = 2; j < m; j += 3) {
                z += a[j];
            }
        }
    }

    if (!x && !y && !z) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}