#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        long long a, b;
        scanf("%lld %lld", &a, &b);

        long long result;
        if (a < b) {
            result = b - a;
        } 
        else if (a == b) {
            result = 0;
        }
        else {
            result = a % b;
            if ((a + result) % b != 0)  {
                result = b - result;
            }
        }

        result %= b;
        printf("%lld\n", result);
    }
    return 0;
}