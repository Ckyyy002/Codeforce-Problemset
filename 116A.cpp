#include <iostream>
using namespace std;

int main(){
    int a, pass;
    cin >> a;
    int b[a][2];

    for(int i = 0; i < a; i++){
        for(int j = 0; j < 2; j++){
            cin >> b[i][j];
        }
    }

    int start = b[0][0];
    int max = b[0][0];

    for(int i = 0; i < a; i++){
        if(i != 0){
            start -= b[i][0];
        }
        start += b[i][1];
        if(start > max){
            max = start;
        }
    }

    cout << max << endl;;
}