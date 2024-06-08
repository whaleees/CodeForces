#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, a, b, c; cin >> n >> a >> b >> c;
    ll ans = 0;

    for(ll i = 0; i * a <= n; ++i){
        for(ll j = 0; i * a + j * b <= n; ++j){
            ll rem = n - i * a - j * b;
            if(rem % c == 0){
                ans = max(ans, i + j + rem / c);
            }
        }
    }

    cout << ans << '\n';
}