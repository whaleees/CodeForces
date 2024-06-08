#include <bits/stdc++.h>
using namespace std;



int main(){
    int t; cin >> t;

    map<char, int> m;
    for(char i = '1'; i <= '9'; i++){
        m[i] = i - '0';
    }
    m['0'] = 10;

    while(t--){
        string s; cin >> s;
        int sum = 4;
        
        sum += abs(m[s[0]] - 1);
        sum += abs(m[s[1]] - m[s[0]]);
        sum += abs(m[s[2]] - m[s[1]]);
        sum += abs(m[s[3]] - m[s[2]]);

        cout << sum << '\n';
    }
}