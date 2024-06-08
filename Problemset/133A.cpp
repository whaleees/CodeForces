#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int flag = 0;
    for(auto c : s){
        if(c == 'H' || c == 'Q' || c == '9'){
            flag = 1;
            break;
        }
    }
    if(flag) puts("YES");
    else puts("NO");
}