#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >>a;
    int money = 0;
    while(a >= 100){
        a -= 100;
        money++;
    }
    while(a >= 20){
        a -= 20;
        money++;
    }
    while(a >= 10){
        a -= 10;
        money++;
    }
    while(a >= 5){
        a -= 5;
        money++;
    }
    while(a >= 1){
        a -= 1;
        money++;
    }

    cout << money << endl;
}