#include <iostream>
using namespace std;

int main(){
    int a, b, x, y;
    cin >> a >> b;
    x = abs(a - b);

    if(a < b){
        cout << a << " ";
    }
    else{
        cout << b << " ";
    }

    if(x % 2 == 0){
        if(a > b){
            y = (a - b) / 2;
        }
        else if(a < b){
            y = (b - a) / 2;
        }
        else{
            y = 0;
        }
    }
    else{
        if(x % 2 == 1){
            if(a > b){
                y = (a - b - 1) / 2;
            }
            else if(a < b){
                y = (b - a - 1) / 2;
            }
        }
    }

    cout << y << endl;
}