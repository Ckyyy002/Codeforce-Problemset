#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    char b[4];

    for(int i = 0; i < a; i++){
        int yes = 1;
        scanf("%s", &b);
        if(b[0] != 'Y' && b[0] != 'y'){
            yes = 0;
        }
        if(b[1] != 'E' && b[1] != 'e'){
            yes = 0;
        }
        if(b[2] != 'S' && b[2] != 's'){
            yes = 0;
        }

        if(yes){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

}