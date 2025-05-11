#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int total;

    for(int i = 0; i < 2; i++){
        for(int j = 1; j < 3; j++){
            if(a > b){
                int temp = a;
                a = b;
                b = temp;
            }
            if(b > c){
                int temp = b;
                b = c;
                c = temp;
            }
        }
    }

    total = (b - a) + (c - b);
    printf("%d\n", total);
}