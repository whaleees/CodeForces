#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n % 2 == 1){
        n /= 2;
        n--;
        printf("%d\n3 ",n+1);
    }else{
        n /= 2;
        printf("%d\n",n);
    }
    for(int i = 0; i < n; i++){
        printf("2 ");
    }

}