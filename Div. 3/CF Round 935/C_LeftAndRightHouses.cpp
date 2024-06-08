#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, ans = 0;
        cin >> n;
        string s;
        cin >> s;
        int l = 0, r = 0, sf = 0, index = 0;
        for(int i = 0; i < n; i++){
            int temp = 0;
            for(int j = i; j >= 0; j--){
                if(s[j] == '0') l++;
            }
            for(int j = i; j < n; j++){
                if(s[j] == '1') r++;
            }
            if(l >= i/2 && r >= (n-i)/2){
                index = i;
                break;
            }
        }
        // cout << sf << " " << index;
        cout << index << '\n';
        // cout << l << " " << r << " " << ans;
    }
}