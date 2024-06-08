#include <stdio.h>
#define ll long long

int main(){
    ll k,n,w;
    ll harga = 0;
    scanf("%lld%lld%lld",&k,&n,&w);
    for(ll i = 1; i <= w; i++){
        harga += i*k;
    }
    if(n >= harga) printf("0\n");
    else printf("%lld\n",harga - n);
}