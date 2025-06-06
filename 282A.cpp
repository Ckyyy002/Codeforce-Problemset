#include <iostream>
#include <string>
using namespace std;
 
int main() {
    
    int a;
    int x = 0;
    cin >> a;
        for (int i = 1; i <= a; i++) {
            string operation;
            cin >> operation;
                if (operation == "X++" || operation == "++X" ) {
                    x++;
                }
                else if (operation == "X--" || operation == "--X") {
                    x--;
                }
            }
        cout << x << endl;
     return 0;
}