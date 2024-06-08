#include <stdio.h>
#include <string.h>

int main(){
    int tc;
    scanf("%d",&tc);
    while(tc--){
        char x[101];
        scanf("%s",&x);
        if(strlen(x) > 10){
            printf("%c%d%c\n",x[0],strlen(x) - 2,x[strlen(x) - 1]);
        }else{
            printf("%s\n",x);
        }
    }
}