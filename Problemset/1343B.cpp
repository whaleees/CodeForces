// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main(){
//     ll t;
//     cin >> t;
//     while(t--){
//         ll n;
//         cin >> n;
//         if(n % 4 != 0) puts("NO");
//         else{
//             puts("YES");
//             int temp = n/2, even = 2;
//             while(temp--){
//                 cout << even << " ";
//                 even += 2;
//             }
//             temp = n/2; 
//             int odd = 1;
//             while(temp--){
//                 if(temp == 0) cout << n+1 << "\n";
//                 else{
//                     cout << odd << " ";
//                     odd += 2;
//                 }
//             }
//         }
//     }
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    scanf("%lld", &t);
    while(t--){
        ll n;
        scanf("%lld", &n);
        if(n % 4 != 0){
            printf("NO\n");
        }else{
            printf("YES\n");
            ll genap = 2, sum = 0;
            for(ll i = 0; i < n/2; i++){
                printf("%lld ",genap);
                sum += genap;
                genap += 2;
            }
            ll ganjil = 1;
            for(ll i = 0; i < (n/2)-1; i++){
                printf("%lld ",ganjil);
                sum -= ganjil;
                ganjil += 2;
            }
            printf("%lld\n", sum);
        }
    }
}