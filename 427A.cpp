#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a;
    int officer = 0;
    int no = 0;

    for(int i = 0; i < a; i++){
        cin >> b;
        officer += b;
        if(officer < 0){
            officer = 0;
            no++;
        }
    }
    cout << no << endl;
}