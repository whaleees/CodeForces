#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int arr[4], ans = 0;
        for(int i = 0; i < 4; i++){
            cin >> arr[i];
            if(i != 0 && arr[i] > arr[0]){
                ans++;
            }
        }
        cout << ans << endl;
    }
}