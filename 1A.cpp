#include <iostream>
using namespace std;

int main() {
    int n, m, a;
    cin >> n >> m >> a;

    int length = (n + a - 1) / a;
    int width = (m + a - 1) / a;
    int total = length * width;

    cout << total << endl;

    return 0;
}
