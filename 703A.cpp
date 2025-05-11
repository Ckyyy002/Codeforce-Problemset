#include <iostream>
using namespace std;

int m, n;

void solve(int x, int y){
    if(x > y){
        m++;
        return;
    }
    if(x < y){
        n++;
        return;
    }
    else{
        return;
    }
}

void scan(){
    int x, y;
    cin >> x >> y;
    solve(x, y);
}

void print(){
    if(m > n){
        cout << "Mishka" << endl;
    }
    if(m < n){
        cout << "Chris" << endl;
    }
    if(m == n){
        cout << "Friendship is magic!^^" << endl;
    }
}

int main(){
    int a;
    m = 0, n = 0;
    cin >> a;
    for(int i = 0; i < a; i++){
        scan();
    }
    print();
}