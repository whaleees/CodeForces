#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        // cout << floor((k-1)/(n-1)) << endl;
        cout << (k-1)/(n-1) + k << endl;
    }
}