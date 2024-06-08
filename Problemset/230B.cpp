#include <bits/stdc++.h>
using namespace std;
#define ll long long

map<ll, bool> m;

bool isPrime(ll n){
    for(ll i = 2 ; i <= sqrt(n); i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

void ans(){
    for(ll i = 2; i * i <= 1e12; ++i){
        if(isPrime(i)){
            m[i * i] = true;
        }
    }
}

int main(){
    ll n; cin >> n;

    ans();
    
    while(n--){
        ll num; cin >> num;
        
        if(m.find(num) != m.end()) puts("YES");
        else puts("NO");

    }
}
