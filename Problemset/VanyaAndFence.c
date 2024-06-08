#include <stdio.h>

int main(){
    int n,h;
    scanf("%d%d",&n,&h);
    int width = 0;
    while(n--){
        int height;
        scanf("%d",&height);
        if(height > h) width += 2;
        else width++;
    }
    printf("%d\n",width);
}