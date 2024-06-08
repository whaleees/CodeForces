#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n; cin >> n;
    ll arr[n + 1];

    ll cnt = 0, tmp = 0, cnttmp = 0;
    for(ll i = 1; i <= n; i++){
        cin >> arr[i];


        if(arr[i] >= tmp){
            tmp = arr[i];
            cnttmp++;
        }else{
            tmp = arr[i];
            cnttmp = 1;
        }

        if(cnttmp >= cnt){
            cnt = cnttmp;
        }
        // cout << cnttmp << '\n';
    }

    if(cnttmp >= cnt){
        cnt = cnttmp;
    }

    cout << cnt << '\n';    
}