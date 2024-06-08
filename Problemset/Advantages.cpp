#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll tc;
    cin >> tc;
    while(tc--){
        ll n;
        cin >> n;
        ll arr[n];
        ll dum[n];
        for(ll i = 0; i < n; i++){
            cin >> arr[i];
            dum[i] = arr[i];
        }
        sort(dum, dum + n);
        for(int i = 0; i < n; i++){
            if(arr[i] == dum[n-1]){
                cout << arr[i] - dum[n-2] << " ";
            }else{
                cout << arr[i] - dum[n-1] << " ";
            }
        }
        cout << "\n";
    }
}