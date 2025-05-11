#include <stdio.h>
#include <string.h>

void solve(char b[]){
    if(strcmp(b, "abc") == 0){
        printf("YES\n");
    }
    else if(strcmp(b, "acb") == 0){
        printf("YES\n");
    }
    else if(strcmp(b, "bac") == 0){
        printf("YES\n");
    }
    else if(strcmp(b, "cba") == 0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}

int main(){
    int a;
    scanf("%d", &a);
    for(int i = 0; i < a; i++){
        char b[4];
        scanf("%s", &b);
        solve(b);
    }
}