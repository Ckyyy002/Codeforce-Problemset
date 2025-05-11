#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;

    int b[a];
    int max = 0;
    for(int i = 0; i < a; i++){
        cin >> b[i];
        if(b[i] > max){
            max  = b[i];
        }
    }

    int add = 0;
    for(int i = 0; i < a; i++){
        if(b[i] == max){
            continue;
        }
        else{
            add += max - b[i];
        }
    }

    cout << add << endl;
}