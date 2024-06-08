#include <stdio.h>
#include <math.h>

int main(){
    long long x;
    scanf("%lld",&x);
    if(x % 5 == 0){
        printf("%lld\n",x/5);
    }else{
        printf("%lld\n",(x/5)+1);
    }
}