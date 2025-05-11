#include <stdio.h>
#include <string.h>

int main(){
    int b;
    scanf("%d", &b);
    char a[b];
    scanf("%s", &a);
    int same = 0;
    int capital = 0;

    for(int i = 0; i < b; i++){
        if(a[i] >= 'A' && a[i] <= 'Z'){
            capital++;
        }
    }

    if(capital > 0){
        for(int i = 0; i < b; i++){
            if(a[i] >= 'A' && a[i] <= 'Z'){
                for(int j = i + 1; j < b ; j++){
                    if(a[i] == a[j]){
                        int change1 = i;
                        int len1 = 0;
                        for(int k = i + 1; k < b; k++){
                            if(a[k] >= 'a' && a[k] <= 'z'){
                                change1++;
                                len1++;
                            }
                            else{
                                break;
                            }
                        }
                        int change2 = j;
                        int len2 = 0;
                        for(int k = j + 1; k < b; k++){
                            if(a[k] >= 'a' && a[k] <= 'z'){
                                change2++;
                                len2++;
                            }
                            else{
                                break;
                            }
                        }

                        if(len1 !=  len2){
                            break;
                        }

                        for(int k = i + 1; k < change1; k++){
                            for(int l = j + 1; l < change2; l++){
                                if(a[k] == a[l]){
                                    same = 1;
                                }
                                else{
                                    same = 0;
                                    break;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    else if(capital == 0){
        int appear[256] = {0};
        same = 1;
        for(int i = 0; i < b; i++){
            if(a[i] >= 'a' && a[i] <= 'z'){
                appear[a[i]]++;
                if(appear[a[i]] > 1){
                    same = 0;
                    break;
                }
            }
        }


    }

    if(same){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}