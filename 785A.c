#include <stdio.h>
#include <string.h>

int main(){
    int a, side = 0;
    scanf("%d", &a);
    char str[100];

    for(int i = 0; i < a; i++){
        scanf("%s", &str);
            if(strcmp(str, "Tetrahedron") == 0){
                side += 4;
            }
            else if(strcmp(str, "Cube") == 0){
                side += 6;
            }
            else if(strcmp(str, "Octahedron") == 0){
                side += 8;
            }
            else if(strcmp(str, "Dodecahedron") == 0){
                side += 12;
            }
            else if(strcmp(str, "Icosahedron") == 0){
                side += 20;
            }
    }

    printf("%d", side);
}