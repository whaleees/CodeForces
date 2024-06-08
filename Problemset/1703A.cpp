#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        for(auto& x : s){
            x = tolower(x);
        }
        if(s == "yes") puts("YES");
        else puts("NO");
    }
}