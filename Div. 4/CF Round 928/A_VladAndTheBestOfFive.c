#include <stdio.h>
#include <string.h>

int main(){
    int tc;
    scanf("%d",&tc);
    while(tc--){
        int x = 5, a = 0, b = 0;
        while(x--){
            char str;
            scanf(" %c",&str);
            if(str == 'A') a++;
            else if(str == 'B') b++;
        }
        if(a > b) printf("A\n");
        else printf("B\n");
    }
}
