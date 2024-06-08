#include <stdio.h>

int main(){
    int n, cnt = 0, i = 1;
    scanf("%d",&n);
    int temp = 0;
    while(n >= 0){
        temp += i;
        n -= temp;
        i++;
        cnt++;
    }
    printf("%d\n",cnt - 1);
}