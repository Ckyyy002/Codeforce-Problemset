#include <iostream>
using namespace std;

void solve(int x, int y, int z){
    if(x + y >= 10){
        cout << "YES" << endl;
        return;
    }
    if(x + z >= 10){
        cout << "YES" << endl;
        return;
    }
    if(z + y >= 10){
        cout << "YES" << endl;
        return;
    }  
    cout << "NO" << endl;
}

void scan(int a){
    int x, y, z;
    cin >> x >> y >> z;
    solve(x, y, z);
}

int main(){
    int a;
    cin >> a;
    for(int i = 0; i < a; i++){
        scan(a);
    }
}