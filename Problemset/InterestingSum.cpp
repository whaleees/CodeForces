#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll tc;
    cin >> tc;
    while(tc--){
        ll n;
        cin >> n;
        int arr[n];
        for(ll i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr,arr+n);
        cout << arr[n-1]-arr[0]+arr[n-2]-arr[1] << endl;
    }
}