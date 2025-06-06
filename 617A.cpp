#include <iostream>
using namespace std;
 
int hitung(int x){
    int langkah = 0;
    while (x > 0) {
        if (x >= 5) {
            x -= 5;
            langkah++;
        } else {
            x = 0;
            langkah++;
        }
    }
    return langkah;
}
 
int main(){
    int x;
    cin >> x;
    if (x <= 0) {
        return 1;
    }
    cout << hitung(x) << endl;
    return 0;
}