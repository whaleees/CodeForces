#include <stdio.h>

int main(){
    int n, cnt = 0;
    scanf("%d",&n);
    while(n--){
        int a,flag = 0, i = 0;
        while(i != 3){
            scanf("%d",&a);
            i++;
            if(a == 1) flag++;
        }
        if(flag >= 2) cnt++;
    }
    printf("%d\n",cnt);
}