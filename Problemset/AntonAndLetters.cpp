#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int cnt = 0;
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            mp[s[i]]++;
        }else{
            continue;
        }
    }
    for (char c = 'a'; c <= 'z'; c++) {
        if (mp[c] > 0){
            // cout <<c << ":" << mp[c] << endl;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     char s[1001];
//     cin >> s;
//     int ans = 0, arr[27] = {};
//     for(int i = 0; i < strlen(s); i++){
//         if(s[i] >= 'a' && s[i] <= 'z'){
//             int curr =  s[i] - 'a';
//             arr[curr]++;
//         }else if(s[i] == ' ' || s[i] == '{' || s[i] == '}'){
//             continue;
//         }
//     }
//     for(int i = 0; i < 26; i++){
//         if(arr[i] > 0) ans++;
//     }
//     cout << ans;
// }
