#include <bits/stdc++.h>
using namespace std;
#define ll long long

void toBinary(ll n, vector<char> &binary){
    if(n > 1){
        toBinary(n / 2, binary);
    }
    binary.push_back((n % 2) + '0');
}

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<char> binary;

        toBinary(n, binary);

        // for(char bit : binary){
        //     cout << bit;
        // }
        // cout << binary.size();
        // cout << '\n';
        ll ansSize  = binary.size();
        ll power = pow(2, ansSize);
        // cout << power << '\n';

        ll ans = power - n;
        toBinary(ans, binary);
        reverse(binary.cbegin(), binary.cend());

        vector<int> temp;
        for(int i = 0; i < binary.size(); i++){
            if(binary[i] == '1') temp.push_back(i);
        }

        for(ll i = 0; i < ansSize; i++){
            
        }
    }
}