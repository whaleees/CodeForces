#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    scanf("%lld", &t);
    while(t--){
        ll n;
        scanf("%lld", &n);
        ll ans1 = n / 3, ans2 = n / 3;
        n %= 3;
        if(n == 1) ans1++;
        else if(n == 2) ans2++;
        printf("%lld %lld\n",ans1, ans2);
    }
}