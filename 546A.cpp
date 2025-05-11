#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    int i = 1, n = 0;

    while(c > 0){
        n += a * i;
        i++;
        c--;
    }

    b -= n;

    if(b > 0){
        cout << 0 << endl;
    }
    else{
        cout << -b << endl;
    }
}