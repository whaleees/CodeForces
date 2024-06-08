#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    map<string, int> m;

    while(n--){
        string s; cin >> s;

        if(m.find(s) != m.end()){
            m[s]++;
            cout << s << m[s] << '\n';
        }else{
            m[s] = 0;
            puts("OK");
        }
    }
}