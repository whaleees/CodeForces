#include <bits/stdc++.h>
using namespace std;
#define ll long long

/*
abacaba
1110111

*/

void solve(ll n, ll k, char s[]){
    bool typeable[26];
    memset(typeable, false,  sizeof(typeable));
    for(ll i = 0; i < k; i++){
        char x;
        scanf(" %c", &x);
        typeable[x - 'a'] = 1;
    }
    ll a[n+1] = {};
    for(ll i = 0; i < n; i++){
        if(typeable[s[i] - 'a']){
            a[i] = 1;
        }else{
            a[i] = 0;
        }
    }
    ll ans = 0;
    ll f[n+1];
    f[0] = 0;
    for(ll i = 0; i < n; i++){
        if(a[i] == 0){
            f[i + 1] = 0;
        }else{
            f[i + 1] = f[i] + 1;
        }
        ans += f[i + 1];
    }
    printf("%lld\n", ans);
}

int main(){
    ll n, k;
    scanf("%lld%lld", &n, &k);
    char s[n];
    scanf("%s", s);
    solve(n, k, s);
}