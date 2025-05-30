#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[101];
    int count;
} team;

int main() {
    int n, teamCount = 0;
    scanf("%d", &n);

    team t[n];
    int max = 0;

    for(int i = 0; i < n; i++) {
        char nm[101];
        scanf("%s", nm);

        int add = 1;
        if(teamCount == 0) {
            strcpy(t[teamCount].name, nm);
            t[teamCount++].count = 1;
        }
        else{
            for(int j = 0; j < teamCount; j++) {
                if(strcmp(t[j].name, nm) == 0) {
                    t[j].count++;
                    add = 0;
                    if(t[j].count > max) {
                        max = t[j].count;
                    }
                    break;
                }
            }
            if(add) {
                strcpy(t[teamCount].name, nm);
                t[teamCount++].count = 1;
            }
        }
    }

    for(int i = 0; i < teamCount; i++) {
        if(t[i].count >= max) {
            printf("%s\n", t[i].name);
        }
    }
}