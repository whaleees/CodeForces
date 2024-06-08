#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int c1 = 0, c0 = 0;
    int tmp = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0') tmp++;
        else{
            if(tmp > c0) c0 = tmp;
            tmp = 0;
        }
    }
    if(tmp > c0) c0 = tmp;
    tmp = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1') tmp++;
        else{
            if(tmp > c1) c1 = tmp;
            tmp = 0;
        }
    }
    if(tmp > c1) c1 = tmp;
    // printf("%d\n%d\n", c0, c1);
    if(c1 >= 7 || c0 >= 7) cout << "YES" << '\n';
    else cout << "NO" << '\n';
}