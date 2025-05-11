#include <stdio.h>

int main(){
    int arr[4], same1 = -1, same2 = -1, same3 = -1, same4 = -1, same = 0;

    for(int i = 0; i < 4; i++){
        scanf("%d", &arr[i]);
        if(i > 0){
            if(arr[i] == arr[i-1]){
                same++;
                if(same1 == -1){
                    same1 = arr[i];
                } 
                else if(same2 == -1 && arr[i] != same1){
                    same2 = arr[i];
                } 
                else if(same3 == -1 && arr[i] != same1 && arr[i] != same2){
                    same3 = arr[i];
                } 
                else if(same4 == -1 && arr[i] != same1 && arr[i] != same2 && arr[i] != same3){
                    same4 = arr[i];
                }
            }
        }
    }

    printf("%d\n", same);
    return 0;
}