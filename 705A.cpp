#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int b = 1;
    while(b < a){
        if(b % 2){
            cout << "I hate that ";
        }
        else{
            cout << "I love that ";
        }
        b++;
    }
    if(b == a){
        if(a % 2){
            cout << "I hate it";
        }
        else{
            cout << "I love it";
        }
    }
}