#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a;

    int easy = 1;

    for(int i = 0; i < a; i++){
        cin >> b;
        if(b == 1){
            easy = 0;
        }
    }

    if(easy){
        cout << "EASY" << endl;
    }
    else{
        cout << "HARD" << endl;
    }
}