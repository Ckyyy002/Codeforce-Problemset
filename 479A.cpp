#include <iostream>
using namespace std;

int main() {
    int a, b, c, result;
    cin >> a >> b >> c;

    int max = 0;

    result = a + b + c;
    if (result > max) {
        max = result;
    }

    result = (a + b) * c;
    if (result > max) {
        max = result;
    }

    result = a * (b + c);
    if (result > max) {
        max = result;
    }

    result = a * b * c;
    if (result > max) {
        max = result;
    }

    cout << max << endl;
}