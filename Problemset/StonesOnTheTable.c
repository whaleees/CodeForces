#include <stdio.h>
#include <string.h>

int main(){
    int x;
    scanf("%d",&x);
    char str[x+1];
    scanf("%s",&str);
    int cnt = 0;
    for(int i = 0; i < x-1; i++){
        if(str[i] == str[i+1]) cnt++;
    }
    printf("%d\n",cnt);
}