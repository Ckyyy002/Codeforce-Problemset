#include <iostream>
using namespace std;

int main() {
    string n;
    cin >> n;

    int lucky = 1, almost_lucky = 1;
    for (char c : n) {
        if (c != '4' && c != '7') {
            lucky = 0;
            break;
        }
    }

    int num = stoi(n);
    if(num % 4 != 0 && num % 7 != 0 && num % 47 != 0 && num % 74 != 0) {
        almost_lucky = 0;
    }

    if(lucky || almost_lucky) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}