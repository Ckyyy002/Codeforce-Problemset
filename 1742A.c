#include <stdio.h>
 
int main(){
    int a, b, c, d;
    int e[3];
 
    scanf("%d", &a);
 
    for(int i = 0; i < a; i++){
        scanf("%d %d %d", &b, &c, &d);
        e[0] = b;
        e[1] = c;
        e[2] = d;
 
        for(int j = 0; j < 2; j++){
            for(int k = 1; k < 3; k++){
                if(e[j] == e[k]){
                    continue;
                }
                if(e[j] > e[k]){
                    int temp = e[j];
                    e[j] = e[k];
                    e[k] = temp;
                }
            }
        }
 
        if(e[0] + e[1] == e[2]){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}