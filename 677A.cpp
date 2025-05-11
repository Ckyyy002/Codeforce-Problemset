#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b;

    int jump = 0;

    for(int i = 0; i < a; i++){
        cin >> c;
        if(c <= b){
            jump++;
        }
        else{
            jump += 2;
        }
    }

    cout << jump << endl;
}