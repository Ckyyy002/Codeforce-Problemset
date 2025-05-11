#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int time = 240 - b;
    int solve = 0;

    for(int i = 1; i <= a; i++){
        time -= 5 * i;
        if(time < 0){
            break;
        }
        solve++;
    }

    cout << solve << endl;
}