#include <bits/stdc++.h>
using namespace std;

/*
. = 0
-. = 1
-- = 2
*/
int main(){
    string s;
    cin >> s;
    queue<int> ss;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '.'){
            ss.push(0);
        }else if(s[i] == '-' && s[i+1] == '.'){
            ss.push(1);
            ++i;
        }else if(s[i] == '-' && s[i+1] == '-'){
            ss.push(2);
            ++i;
        }
    }
    while(!ss.empty()){
        cout << ss.front();
        ss.pop();
    }
}