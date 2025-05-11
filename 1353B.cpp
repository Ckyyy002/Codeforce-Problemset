#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;

    int b, c;
    for(int i = 0; i < a; i++){
        cin >> b >> c;
        int d[b], e[b];
        for(int j = 0; j < b; j++){
            cin >> d[j];
        }
        for(int j = 0; j < b; j++){
            cin >> e[j];
        }

        for(int k = 0; k < b; k++){
            for(int l = 0; l < b - 1; l++){
                if(d[l] < d[l+1]){
                    int temp = d[l];
                    d[l] = d[l+1];
                    d[l+1] = temp;
                }
            }
        }

        for(int k = 0; k < b; k++){
            for(int l = 0; l < b - 1; l++){
                if(e[l] < e[l+1]){
                    int temp = e[l];
                    e[l] = e[l+1];
                    e[l+1] = temp;
                }
            }
        }

        int x = b - 1;
        int y = 0;

        for(int j = 0; j < c; j++){
            if(d[x] < e[y]){
                int temp = d[x];
                d[x] = e[y];
                e[y] = temp;
                x--;
                y++;
            }
        }

        int sum1 = 0;

        for(int j = 0; j < b; j++){
            sum1 += d[j];
            //cout << d[j] << " ";    
        }

        //cout << endl;

        cout << sum1 << endl;

    }
}