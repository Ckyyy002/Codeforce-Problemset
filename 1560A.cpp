#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;

    for(int i = 0; i < a; i++){
        int b;
        cin >> b;

        int result = 0;
        for(int i = 1; i <= b; i++){
            if(i % 3 == 0 || i % 10 == 3){
                b++;
            }
            result++;
        }

        cout << result << endl;
    }
}