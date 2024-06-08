#include <stdio.h>
#define ll long long

int main(){
    ll n;
    scanf("%lld",&n);
    if(n % 2 == 0) printf("%lld\n",n / 2);
    else printf("%lld\n",(n/2) - n);
}