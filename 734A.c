#include <stdio.h>

int main(){
    int n;
    scanf("%d\n", &n);
    char b[n];
    gets(b);

    int d = 0, a = 0;

    for(int i = 0; i < n; i++){
        if(b[i] == 'A'){
            a++;
        }
        else if(b[i] == 'D'){
            d++;
        }
    }

    if(d > a){
        printf("Danik\n");
    }
    else if(d < a){
        printf("Anton\n");
    }
    else{
        printf("Friendship\n");
    }
}