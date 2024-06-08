#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> v(n);
        for(ll i = 0; i < n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        ll ans = 0, x = 0, y = 0;
        if(n % 2 == 0){
            x = v[n/2 - 1];
            y = n/2 - 1;
        }else{
            x = v[n/2];
            y = n/2;
        }
        for(int i = y; i < n; i++){
            if(v[i] == x){
                ans++;
            }
        }
        cout << ans << endl;
    }
}