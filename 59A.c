#include <stdio.h>
#include <string.h>

int main(){
    unsigned char input[101];
    scanf("%s", &input);

    int len1 = strlen(input);
    int upper = 0, lower = 0;

    for(int i = 0; i < len1; i++){
        if(input[i] >= 'A' && input[i] <= 'Z'){
            upper++;
        }
        else if(input[i] >= 'a' && input[i] <= 'z'){
            lower++;
        }
    }

    if(lower >= upper){
        for(int i = 0; i < len1; i++){
            if(input[i] >= 'A' && input[i] <= 'Z'){
            input[i] += 32;
            }
        }
    }
    else{
        for(int i = 0; i < len1; i++){
            if(input[i] >= 'a' && input[i] <= 'z'){
            input[i] -= 32;
            }
        }
    }

    for(int i = 0; i < len1; i++){
        printf("%c", input[i]);
    }
}