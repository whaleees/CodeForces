#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(s.size() % 2 == 1){
            puts("NO");
        }else{
            int flag = 1;
            int mid = s.size() / 2;
            for(int i = 0; i < s.size()/2; i++){
                if(s[i] != s[mid+i]){
                    flag = 0;
                    break;
                }
            }
            if(flag) puts("YES");
            else puts("NO");
        }
    }   
}