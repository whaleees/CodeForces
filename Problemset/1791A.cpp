#include <bits/stdc++.h>
using namespace std;

int main(){
    map<char,int> mp;
    string s = "codeforces";
    for(int i = 0; i < s.size(); i++){
        mp[s[i]]++;
    }
    int n;
    cin >> n;
    while(n--){
        char c;
        cin >> c;
        if(mp[c] != 0) puts("YES");
        else puts("NO");
    }
}