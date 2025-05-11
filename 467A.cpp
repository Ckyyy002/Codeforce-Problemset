#include <iostream>
using namespace std;
 
int main(){
    int a, b, c;
    cin >> a;
    int diff = 0;
    for(int i = 0; i < a; i++){
        cin >> b >> c;
        if(b < c - 1){
            diff++;
        }
    }
 
    cout << diff << endl;
}