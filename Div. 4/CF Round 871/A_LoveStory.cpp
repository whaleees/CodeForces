#include <bits/stdc++.h>
using namespace std;

int main(){
    string cf = "codeforces";
    int tc;
    cin >> tc;
    while(tc--){
        string s;
        cin >> s;
        int cnt = 0;
        for(int i = 0; i < s.length(); i++){
            if(cf[i] != s[i]) cnt++;
        }
        cout << cnt << '\n';
    }
}