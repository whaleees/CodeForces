#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    scanf("%lld", &t);
    while(t--){
        ll n;
        scanf("%lld", &n);
        ll arr[n];
        for(ll i = 0; i < n; i++){
            scanf("%lld", &arr[i]);
        }
        sort(arr, arr + n);
        printf("%lld\n", arr[n-1] - arr[0]);
    }
}