#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, ans = 0; cin >> n;
    int h[n],g[n];
    map<int, int> home;
    map<int, int> guest;
    for(int i = 0; i < n; i++){
        cin >> h[i] >> g[n];
        home[h[n]]++;
        guest[g[n]]++;
    }
    for(int i = 0; i < n; i++){
        ans += guest[h[i]];
    }
    cout << ans;
}