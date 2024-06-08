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
        int flag = 1;
        for(ll i = 0; i < n-2; i++){
            if(v[i] == 0) continue;
            else if(v[i] < 0){
                flag = 0;
                break;
            }else{
                v[i+1] -= 2*v[i];
                v[i+2] -= v[i];
            }
        }
        if(v[n-2] == 0 && v[n-1] == 0 && flag == 1){
            puts("YES");
        }else if(flag == 0){
            puts("NO");
        }else{
            puts("NO");
        }
        // int max = *max_element(v.begin(), v.end());
        // if(max == 0) puts("YES");
        // else puts("NO");
    }
}