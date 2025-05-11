#include <iostream>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int ml_drink = k * l / nl;
    int lime = c * d;
    int salt = p / np;

    if(ml_drink <= lime && ml_drink <= salt){
        cout << ml_drink/n << endl;
    }
    else if(lime < ml_drink && lime < salt){
        cout << lime/n << endl;
    }
    else{
        cout << salt/n << endl;
    }
}