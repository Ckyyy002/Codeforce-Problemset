#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    if(a == 2){
        printf("NO\n");
    }
    else if(a % 2 == 1){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }
}