#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,ans= 0;
        cin >> n;
        deque<int> d;
        map<int,int> mp;
        for(int i = 0; i < n; i++){
            cin >> d[i];
            mp[d[i]]++;
        }
        // for(int i = n-1; i >= 0; i--){
        //     if(mp[d[i]] > 1){
        //         d.pop_front();
        //         ans++;
        //         mp[d[i]]--;
        //     }
        // }
        // cout << ans << endl;
        d.pop_front();
        cout << d[0];
    }
}

