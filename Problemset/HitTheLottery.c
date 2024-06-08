#include <stdio.h>
#define ll long long

int main(){
    ll x;
    scanf("%lld",&x);
    ll cnt = 0;
    cnt += x/100;
    x %= 100;
    cnt += x/20;
    x %= 20;
    cnt += x/10;
    x %= 10;
    cnt += x/5;
    x %= 5;
    cnt += x/1;
    x %= 1;
    printf("%lld\n",cnt);
}