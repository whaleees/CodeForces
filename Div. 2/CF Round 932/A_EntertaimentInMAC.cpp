// #include <bits/stdc++.h>
// using namespace std;

// string smallest(int n, string s){
//     string result = "";
//     int len = s.length();

//     for(int i = 0; i < n; i++){
//         if(i % 2 == 0){
//             result += s;
//         }else{
//             string balik = s;
//             reverse(balik.begin(), balik.end());
//             result += balik;
//         }
//     }
//     // if(n % 2 != 0){
//     //     reverse(result.begin(), result.end());
//     // }
//     return result;
// }

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         string str;
//         cin >> n >> str;
//         cout << smallest(n,str) << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        string t = s;
        reverse(t.begin(), t.end());
        cout << min(s, t + s) << "\n";
    }
}