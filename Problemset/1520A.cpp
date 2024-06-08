#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, flag = 1;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> m;
        for(int i = 0; i < n; i++){
            m[s[i]]++;
        }
        for(char c = 'A'; c <= 'Z'; c++){
            bool found = 0;
            for(int i = 0; i < n; i++){
                if(s[i] == c){
                    m[s[i]]--;
                    found = 1;
                }
                if(found && s[i] != c) break;
            }
            if(m[c] > 0){
                flag = 0;
                break;
            }
        }
        if(flag)
        puts("YES");
        else 
        puts("NO");
    }
}