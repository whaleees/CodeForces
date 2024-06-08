#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        int arr[n];
        int cnt = 0;
        int temp = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] == 0) cnt++;
            else{
                temp = max(temp, cnt);
                cnt = 0;
            }
        }
        temp = max(temp, cnt);
        cout << temp << '\n';
    }
}
