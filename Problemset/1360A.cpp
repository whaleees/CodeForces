#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int ans = min(max(2*a , b), max(2*b, a));
        // ans *= 2;
        cout << ans * ans << '\n'; 
    }
}