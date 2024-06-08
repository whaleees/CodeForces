#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        string s;
        cin >> n >> s;
        string t = "";
        while(!s.empty()){
            int x;
            if(s.back() == 'a' || s.back() == 'e'){
                x = 2;
            }else{
                x = 3;
            }
            while(x--){
                t += s.back();
                s.pop_back();
            }
            t += '.';
        }
        t.pop_back();
        reverse(t.begin(), t.end());
        cout << t << '\n';
    }
}