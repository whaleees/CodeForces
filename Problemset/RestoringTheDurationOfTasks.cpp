#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll tc;
    cin >> tc;
    while(tc--){
        ll n;
        cin >> n;
        ll atas[n], bawah[n];
        for(ll i = 0; i < n; i++){
            cin >> atas[i];
        }
        for(ll i = 0; i < n; i++){
            cin >> bawah[i];
        }
        int current = 0;
        int d[n];
        for(ll i = 0; i < n; ++i){ 
            current = max(current, atas[i]);
            d[i] = bawah[i] - current;
            current = bawah[i];
        }
        for(auto x : d){
            cout << x << " ";
        }
        cout << endl;
    }
}