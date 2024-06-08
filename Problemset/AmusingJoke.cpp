#include <bits/stdc++.h>
using namespace std;

int main(){
    bool flag = true;
    map<char, int> mp;
    for(int i = 0; i < 2; i++){
        string s;
        cin >> s;
        for(int j = 0; j < s.size(); j++){
            mp[s[j]]++;
        }
    }
    string s;
    cin >> s;
    map<char, int> mpp;
    for(int i = 0; i < s.size(); i++){
        mpp[s[i]]++;
    }
    for(char i = 'A'; i <= 'Z'; i++){
        if(mp[i] != mpp[i]){
            flag = false;
            break;
        }
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
}