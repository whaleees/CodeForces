#include <stdio.h>

int main(){
    int x = 0, n;
    scanf("%d",&n);
    while(n--){
        char str[5];
        scanf("%s",&str);
        if(str[0] == '+') ++x;
        else if(str[0] == '-') --x;
        else if(str[1] == '+') x++;
        else if(str[1] == '-') x--;
    }
    printf("%d\n",x);

}