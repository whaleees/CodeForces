#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    scanf("%lld", &t);
    while(t--){
        ll n, c, d;
        scanf("%lld%lld%lld", &n, &c, &d);
        ll search[n*n + 1] = {};
        ll min = 1000000001;
        for(ll i = 1; i <= n*n; i++){
            scanf("%lld", &search[i]);
            if(search[i] < min) min = search[i];
        }
        ll arr[n * n + 1] = {};
        ll index = 1;
        ll curr = min;
        for(ll i = 1; i <= n; i++){
            ll temp = curr;
            arr[index] = curr;
            index++;
            for(ll j = 1; j < n; j++){
                temp += d;
                arr[index] = temp;
                index++;
            }
            curr += c;
        }

        // for(ll i = 1; i < index; i++){
        //     printf("%lld\n", arr[i]);
        // }
        // cout << index << '\n';
        // puts("\n");

        bool found = 0;
        for(int i = 1; i <= n * n; i++){
            found = 0;
            for(int j = 1; j < index; j++){
                if(search[i] == arr[j]){
                    arr[j] = -1;
                    found = 1;
                    break;
                }
            }
            if(!found) break;
        }
        if(found) puts("YES");
        else puts("NO");
    }
}