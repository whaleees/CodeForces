#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        string s;
        cin >> n >> s;
        int occur[30] = {};
        int ans = 0;
        // for(int i = 0; i < 26; i++){
        //     occur[i] = 0;
        // }
        for(int i = 0; i < n; i++){
            int current = s[i] - 'A';
            if(occur[current] == 0){
                ans += 2;
                occur[current]++;
            }else{
                ans += 1;
                occur[current]++;
            }
        }
        cout << ans << '\n';
    }
}