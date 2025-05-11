#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int pass = 0, c[a];

    for(int i = 0; i < a; i++){
        cin >> c[i];
    }

    for(int i = 0; i < b; i++){
        if(c[i] > 0){
            pass++;
        }
    }

    for(int i = b; i < a; i++){
        if(c[i] == c[b-1] && c[i] != 0){
            pass++;
        }
    }

    cout << pass << endl;
}