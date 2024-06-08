#include <bits/stdc++.h>
using namespace std;


/*
10 1
2 1 4 5 2 4 5 5 1 2

*/
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n,c, ans = 0;
        cin >> n >> c;
        int arr[n];
        map<int, int> m;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            m[arr[i]]++;
            if(m[arr[i]] <= c){
                ans++;
            }
        }
        cout << ans << endl;
    }
}   