#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v(n + 1);
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
    }
    sum /= 2;
    sort(v.begin(), v.end(), greater<int>());
    int cnt = 0;

    // for(int i = 0; i < n; i++){
    //     cout << v[i] << '\n';
    // }

    for(int i = 0; i < n; i++){
        if(sum < 0) break;
        sum -= v[i];
        cnt++;
    }
    // cout << cnt << '\n';
    if(sum == 0) cout << cnt + 1 << '\n';
    else cout << cnt  << '\n';
}

/*
3 3 3 3

*/