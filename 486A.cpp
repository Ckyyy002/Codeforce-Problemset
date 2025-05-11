#include <iostream>
using namespace std;

int main(){
    long long a;
    cin >> a;
    if(a == 1){
        cout << -a << endl;
    }
    else{
        if(a % 2 == 1){
            a /= 2;
            cout << -a - 1 << endl;
        }
        else{
            cout << a/2 << endl;
        }
    }
}