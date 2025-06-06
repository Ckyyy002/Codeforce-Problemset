#include <iostream>
using namespace std;

int main() {
    int t;
    long a, b;
    cin >> t;

    for(int i = 0; i < t; i++) {
        cin >> a >> b;

        long result = a - b;
        int count = 0;

        if(result < 0) {
            result *= -1;
        }
        if(result >= 10) {
            count += result / 10;
        }

        if(result % 10 != 0){
            count++;
        }

        cout << count << endl;
    }
}