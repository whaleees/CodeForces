#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    scanf("%lld",&t);
    while(t--){
        ll n, sum = 0;
        scanf("%lld", &n);
        vector<ll> v(n);
        for(ll i = 0; i < n; i++){
            scanf("%lld", &v[i]);
            sum += v[i];
        }
        sum /= n;
        // cout << sum;
        ll tmp = 0, flag = 1;
        for(ll i = 0; i < n; i++){
            if(v[i] == sum) continue;
            if(v[i] > sum){
                tmp += (v[i] - sum);
            }else if(v[i] < sum && sum >= 0){
                tmp -= (sum - v[i]);
            }
            if(tmp < 0){
                flag = 0;
                break;
            }
        }
        if(flag) printf("YES\n");
        else printf("NO\n");
    }
}