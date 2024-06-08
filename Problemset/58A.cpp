#include <bits/stdc++.h>
using namespace std;

string ans = "hello";

int main(){
    string s; cin >> s;
    int cnt = 0;
    for(auto c : s){
        if(c == ans[cnt]){
            cnt++;
        }
    }
    if(cnt == 5){
        puts("YES");
    }else{
        puts("NO");
    }
}