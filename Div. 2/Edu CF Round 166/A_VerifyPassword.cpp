#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        string tmp = s;
        sort(tmp.begin(), tmp.end());
        if(s != tmp){
            puts("NO");
        }else{
            puts("YES");
        }
    }
}