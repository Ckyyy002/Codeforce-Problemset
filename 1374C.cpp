#include <iostream>
#include <string>
using namespace std;

int solve(string &s) {
    int balance = 0, move = 0;
    for (char c : s) {
        if (c == '(') {
            balance++;
        } 
        else {
            balance--;
            if (balance < 0) {
                move++;
                balance = 0;
            }
        }
    }
    return move;
}

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int n;
        string s;
        cin >> n >> s;
        cout << solve(s) << endl;
    }
    return 0;
}