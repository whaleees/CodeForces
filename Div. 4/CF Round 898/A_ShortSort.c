#include <stdio.h>
#include <string.h>

int main(){
    int x;
    scanf("%d",&x);
    while(x--){
        char abc[4];
        scanf("%s",&abc);
        if(strcmp(abc, "bca") == 0 || strcmp(abc, "cab") == 0){
            printf("NO\n");
            continue;
        }
        printf("YES\n");
    }

}