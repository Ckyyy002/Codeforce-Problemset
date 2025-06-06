#include <iostream>
using namespace std;

int solve(int a, int b, int c, int result) {
    if(c % b == 0) {
        a += c / b;
        c = 0;
    }
    if (a == 0) {
        return result;
    }

    return solve(a - 1, b, c + 1, result + 1);
}

int main() {
    int a, b, c;
    cin >> a >> b;

    cout << solve(a, b, 0, 0) << endl;
}