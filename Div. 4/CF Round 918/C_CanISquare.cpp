// #include <stdio.h>
// #include <math.h>
// #define ll long long

// int main(){
//     ll tc;
//     scanf("%lld",&tc);
//     while(tc--){
//         ll n;
//         scanf("%lld",&n);
//         int arr[n];
//         ll total = 0;
//         for(ll i = 0; i < n; i++){
//             scanf("%lld",&arr[i]);
//             total += arr[i];
//         }
//         if(sqrt(total) == (ll)sqrt(total)){
//             printf("YES\n");
//         }else{
//             printf("NO\n");
//         }
//     }
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll tc;
    cin >> tc;
    while(tc--){
        ll n;
        cin >> n;
        ll arr[n], sum = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            sum += arr[i];
        }
        if(sqrt(sum) == (ll)sqrt(sum)) cout << "YES\n";
        else cout << "NO\n";
    }
}