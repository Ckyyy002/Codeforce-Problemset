#include <iostream>
using namespace std;

int main(){
    int a, magnet = 1;
    cin >> a;
    int b[a];

    for(int i = 0; i < a; i++){
        cin >> b[i];
    }

    for(int i = 0; i < a - 1; i++){
        if(b[i] != b[i+1]){
            magnet++;
        }
        
    }

    cout << magnet << endl;
}