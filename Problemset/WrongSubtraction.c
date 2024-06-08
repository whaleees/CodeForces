#include <stdio.h>
#define ll long long

int main(){
    ll n,k;
    scanf("%lld%lld",&n,&k);
    while(k--){
        if(n % 10 == 0){
            n /= 10;
        }else{
            n--;
        }
    }
    printf("%lld\n",n);
}