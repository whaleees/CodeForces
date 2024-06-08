#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        string s;
        cin >> n >> s;
        int mp[27];
        for(int i = 0; i < 26; i++){
            mp[i] = -1;
        }
        int flag = 1;
        for(int i = 0; i < n; i++){
            int current = s[i] - 'a';
            if(mp[current] == -1){
                mp[current] = i % 2;
            }else{
                if(mp[current] != i % 2){
                    flag = 0;
                } 
            }
        }    
        if(flag){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}