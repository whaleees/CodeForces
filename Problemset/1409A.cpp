#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define for(i, n) for(int i = 0; i < n; i++)

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll a,b, ans = 0;
        cin >> a >> b;
        // if(a == b){
        //     cout << 
        // }
        ll beda = abs(a-b);
        ans += (beda / 10);
        if(beda % 10 > 0) ans++;
        cout << ans << endl;
    }
}