#include <stdio.h>
#include <string.h>

int main(){
    char input[101];
    scanf("%s", input);
    int len = strlen(input);
    int count = 0;

    for(int i = 0; i < len; i++){
        if(input[i] == 'A' || input[i] == 'a' || input[i] == 'i' || input[i] == 'I' || input[i] == 'U' || input[i] == 'u' || input[i] == 'E' || input[i] == 'e' || input[i] == 'O' || input[i] == 'o' || input[i] == 'Y' || input[i] == 'y'){
            input[i] = '.';
            count++;
        }
        else if(input[i] >= 'A' && input[i] <= 'Z'){
            input[i] += 32;
        }
    }

    len = (len - count) * 2;

    int x = 0;
    for(int i = 0; i < len; i++){
        if(!(i % 2)){
            printf(".", input[i]);
        }
        else{
            for(int j = x; j < len; j++){
                if(input[j] != '.'){
                    printf("%c", input[j]);
                    x = j + 1;
                    break;
                }
            }
        }
    }
}

/*
    abacaba
    .b.c.b.
    .b.
*/