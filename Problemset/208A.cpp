#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    string ans;
    int flag = 1;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B'){
            i += 2;
            if(!flag) ans += " ";
            continue;
        }
        ans += s[i];
        flag = 0;
    }

    cout << ans;
}