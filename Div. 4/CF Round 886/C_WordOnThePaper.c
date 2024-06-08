#include <stdio.h>
#include <string.h>

int main(){
    int tc;
    scanf("%d",&tc);
    while(tc--){
        char x[101] = "";
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                char y;
                scanf(" %c",&y);
                if(y >= 97 && y <= 122){
                    char str[2] = {y};
                    strcat(x, str);
                }
            }
        }
        printf("%s\n",x);
    }
    
}