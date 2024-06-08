#include <bits/stdc++.h>
using namespace std;

int pref[200007] = {};

// int solve(int n){
//     pref[1] = 1;
//     pref[2] = 3;
//     if(pref[n] != 0) return  pref[n];
//     if(n < 10){
//         pref[n] = pref[n-1] + n;
//     }else{
//         int tmp = 0, tmp2 = n;
//         while(tmp2 > 0){
//             tmp += (tmp2 % 10);
//             tmp2 /= 10;
//         }
//         pref[n] += pref[n-1] + tmp;
//     }
//     return pref[n];
// }

int sumDigit(int x){
    int res = 0;
    while(x){
        res += (x % 10);
        x /= 10;
    }
    return res;
}

void solve(){
    pref[0] = 0;
    pref[1] = 1;
    pref[2] = 3;
    for(int i = 3; i <= 200000; i++){
        pref[i] = pref[i - 1] + sumDigit(i);
    }
}

int main(){
    int t;
    scanf("%d", &t);
    solve();
    while(t--){
        int n;
        scanf("%d", &n);
        printf("%d\n", pref[n]);
    }
}