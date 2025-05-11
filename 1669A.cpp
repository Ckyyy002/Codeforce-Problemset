#include <iostream>
using namespace std;

int main(){
    int a; 
    cin >> a;

    for(int i = 0; i < a; i++){
        int b;
        cin >> b;

        cout << "Division ";

        if(b <= 1399){
            cout << 4 << endl;
        }
        else if(b <= 1599){
            cout << 3 << endl;
        }
        else if(b <= 1899){
            cout << 2 << endl;
        }
        else{
            cout << 1 << endl;
        }
    }
}