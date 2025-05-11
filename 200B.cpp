#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double a, b, result = 0;

    cin >> a;
    for(int i = 0; i < a; i++){
        cin >> b;
        result += b;
    }

    result /= a;
    cout << fixed << setprecision(12) << result << endl;
}