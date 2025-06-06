#include <iostream>
using namespace std;

int main() {
    long long x, result = 0;
    cin >> x;

    while (x > 0) {
        if(x % 2){
            result++;
        }
        x /= 2;        
    }

    cout << result << endl;
}