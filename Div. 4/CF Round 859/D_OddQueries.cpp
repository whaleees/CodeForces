#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    scanf("%lld",&t);
    while(t--){
        ll n, q, sum = 0;
        scanf("%lld%lld", &n, &q);
        vector<ll> v(n+1);
        ll pref[n+1] = {};
        for(ll i = 1; i <= n; i++){
            scanf("%lld", &v[i]);
            if(i == 1) pref[1] = v[i];
            pref[i] = v[i] + pref[i-1];
        }
        // for(ll i = 1; i <= n; i++){
        //     printf("%d\n",pref[i]);
        // }
        while(q--){
            ll l, r, k, ans = 0;
            scanf("%lld%lld%lld", &l, &r, &k);
            ans += (pref[n] - (pref[r] - pref[l-1]));
            ans += (k*(r-l+1));
            if(ans % 2 == 1) printf("YES\n");
            else printf("NO\n");
        }   
    }
}