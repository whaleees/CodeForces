#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int upper = 0, lower = 0;
    for(auto c : s){
        if(c >= 'A' && c <= 'Z') upper++;
        else if(c >= 'a' && c <= 'z') lower++;
    }

    // cout << lower << " " << upper;

    if(lower == 0){
        for(auto c : s){
            cout << (char) tolower(c);
        }
        return 0;
    }else if(s[0] >= 'a' && s[0] <= 'z' && lower == 1){
        for(int i = 0; i < s.size(); i++){
            if(i == 0) cout << (char)toupper(s[i]);
            else{
                cout << (char)tolower(s[i]);
            }
        }
        return 0;
    }

    cout << s;
}