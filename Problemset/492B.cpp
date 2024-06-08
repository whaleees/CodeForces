#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, l; scanf("%lld%lld", &n, &l);

    ll lantern[n + 1];

    for(ll i = 0; i < n; i++){
        scanf("%lld", &lantern[i]);
    }

    sort(lantern, lantern + n);

//     for(ll i = 0; i < n; i++){
//         printf("%lld ", lantern[i]);
//     }

    ll most = 2 * max(lantern[0], l - lantern[n - 1]);
    for(ll i = 0; i < n - 1; i++){
        most = max(most, lantern[i + 1] - lantern[i]);
    }

    printf("%.10lf\n", most / 2.);
}