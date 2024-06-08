// Cara 1
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// ll t = 4, c = 6, o = 8, d = 12, i = 20;
// int main(){
//     ll n, ans = 0;
//     cin >> n;
//     while(n--){
//         string s;
//         cin >> s;
//         if(s[0] == 'T') ans += t;
//         else if(s[0] == 'C') ans += c;
//         else if(s[0] == 'O') ans += o;
//         else if(s[0] == 'D') ans += d;
//         else if(s[0] == 'I') ans += i;
//     }
//     cout << ans << endl;
// }

//Cara 2
#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    map<string,int> mp;
    mp["Tetrahedron"] = 4;
    mp["Octahedron"] = 8;
    mp["Dodecahedron"] = 12;
    mp["Icosahedron"] = 20;
    mp["Cube"] = 6;
    ll n, ans = 0;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        ans += mp[s];
    }
    cout << ans;
}