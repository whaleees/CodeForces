#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        char baris = s[0];
        char kolom = s[1];
        // cout << baris << " " << kolom << '\n';
        for(int i = 1; i <= 8; i++){
            if(i == (kolom - '0')){
                continue;
            }
            cout << baris << i << '\n';
        }
        for(char i = 'a'; i <= 'h'; i++){
            if(i == baris) continue;
            cout << i << kolom << '\n';
        }
    }
}