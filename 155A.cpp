#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int b[a];

    for(int i = 0; i < a; i++){
        cin >> b[i];
    }

    int max = b[0];
    int min = b[0];
    int amazing = 0;

    for(int i = 1; i < a; i++){
        if(b[i] > max){
            amazing++;
            max = b[i];
        }
        else if(b[i] < min){
            amazing++;
            min = b[i];
        }
    }

    cout << amazing << endl;
}