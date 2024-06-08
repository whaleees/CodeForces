#include <stdio.h>

/*
15,3
*/

int main(){
    int tc;
    scanf("%d",&tc);
    while(tc--){
        int n,x;
        scanf("%d%d",&n,&x);
        if(n == 1 || n == 2){
            printf("1\n");  
            continue;     
        }
        n -= 2;
        if(n % x == 0){
            printf("%d\n",(n/x)+1);
        }else{
            printf("%d\n",(n/x)+2);
        }
    }
}