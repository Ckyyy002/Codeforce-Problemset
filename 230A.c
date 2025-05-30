#include <stdio.h>
#include <stdlib.h>

typedef struct dragon {
    int strength;
    int bonus;
} dragon;

void sort_dragons(dragon *d, int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(d[j].strength > d[j + 1].strength) {
                dragon temp = d[j];
                d[j] = d[j + 1];
                d[j + 1] = temp;
            }
        }
    }
}

int main() {
    int s, n;
    scanf("%d %d", &s, &n);

    dragon d[n];
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &d[i].strength, &d[i].bonus);
    }

    sort_dragons(d, n);

    int can = 1;
    for(int i = 0; i < n; i++) {
        if(s > d[i].strength) {
            s += d[i].bonus;
        } else {
            printf("NO\n");
            can = 0;
            return 0;
        }
    }

    if(can) {
        printf("YES\n");
    }
}