#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    scanf("%lld", &t);
    while(t--){
        ll n, k;
        scanf("%lld%lld", &n, &k);
        deque<ll> a(n);
        for(ll i = 0; i < n; i++){
            scanf("%lld", &a[i]);
        }
        ll sunk = 0;
        bool front = 1;
        while(k-- && !a.empty()){
            if(a.front() + a.back() < ){
                k -= (a.front() + a.back());
                sunk += 2;
                a.pop_back(); 
                a.pop_front();
            }else{
                if(front){
                    front = 0;
                    a.front()--;
                }else{
                    front = 1;
                    a.back()--;
                }
                if(a.front() == 0){
                    a.pop_front();
                    sunk++;
                }else if(a.back() == 0){
                    a.pop_back();
                    sunk++;
                }
            }
        }
        printf("%lld\n", sunk);
    }
}