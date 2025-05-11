#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    for(int i = 0; i < a; i++){
        int b;
        cin >> b;
        int c[b];

        for(int j = 0; j < b; j++){
            cin >> c[j];
        }

        int mod = c[0], max = 0;
        for(int j = 0; j < b - 1; j++){
            int same = 0;
            for(int k = j + 1; k < b; k++){
                if(c[j] == c[k]){
                    same++;
                }
                if(same > max){
                    max = same;
                    mod = c[j];
                }
            }
        }

        for(int j = 0; j < b; j++){
            if(c[j] != mod){
                cout << j + 1 << endl;
                break;
            }
        }
    }
}