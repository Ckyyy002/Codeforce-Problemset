#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;

    for(int i = 0; i < a; i++){
        int b, c, d;
        cin >> b >> c >> d;

        if(b + c == d){
            cout << "+" << endl;
        }
        else if(b - c == d){
            cout << "-" << endl;
        }
    }
}