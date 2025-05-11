#include <stdio.h>
#include <string.h>
 
int main(){
    char a[101];
    scanf("%s", &a);
 
    int len1 = strlen(a);
    int lucky = 0;
    int yes = 1;

    for(int i = 0; i < len1; i++){
        if(a[i] == '4' || a[i] == '7'){
            lucky++;
        }
    }
    
    if(lucky != 4 && lucky != 7){
        yes = 0;
    }
 
    if(yes){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
