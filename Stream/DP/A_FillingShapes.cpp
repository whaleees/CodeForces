#include <bits/stdc++.h>
using namespace std;
#define ll long long

/*
ex : fibo
state : f(n)
transitions :   f(n) = f(n-1) + f(n-2)
base case : f(0) = 0, f(1) = 1

kalo ada semua bisa pake dp
*/

void dp(ll n){
    ll f[n+1];          //state
    f[0] = 1;           //basecase
    f[1] = 0;           //basecase
    for(ll i = 2; i <= n; i++){
        f[i] = 2 * f[i - 2];
    }
    printf("%lld\n", f[n]);
}

int main(){
    ll n;
    scanf("%lld", &n);
    dp(n);
}