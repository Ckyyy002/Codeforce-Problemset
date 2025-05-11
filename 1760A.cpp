#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;

    for(int i = 0; i < a;  i++){
        int b[3];
        cin >> b[0] >> b[1] >> b[2];

        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 2; k++){
                if(b[k] > b[k+1]){
                    int temp = b[k];
                    b[k] = b[k+1];
                    b[k+1] = temp;
                }
            }
        }

        cout << b[1] << endl;
    }
} 