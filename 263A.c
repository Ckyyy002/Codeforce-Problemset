#include <stdio.h>
#include <math.h>

int main(){
    int a[5][5];
    int b = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(a[i][j] == 1){
                b += fabs(i - 2);
                b += fabs(j - 2);
            }
        }
    }

    printf("%d", b);
}