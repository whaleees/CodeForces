#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        for(int i = 0; i < s.size(); i++){
            if(i % 2 == 0 && i != 0) continue;
            else cout << s[i];
        }
        puts("");
    }
}