#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, m; cin >> n >> m;
    ll dest[m + 1];

    ll temp = 0, ans = 0;
    while(m--){
        ll num; cin >> num;
        if(temp == 0){
            ans += (num - 1);
            temp = num;
        }

        if(temp > num){
            ans += (n - temp);
            ans += num;
        }else if (temp < num){
            ans += (num - temp);
        }

        temp = num;
    }

    cout << ans;
}