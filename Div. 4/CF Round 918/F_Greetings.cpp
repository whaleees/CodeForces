#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        int a[n],b[n];
        for(int i = 0; i < n; i++){
            cin >> a[i] >> b[i];
        }
        int cnt = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(a[i] == a[j]) cnt++;
                break;
            }
            for(int z = 0; z < n; z++){
                if(a[z] != b[z]) a[z]++;
            }
        }
        cout << cnt << "\n";
    }
}