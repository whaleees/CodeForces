#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr, arr+n);
        arr[0]++;
        int tot = 1;
        for(int i = 0; i < n; i++){
            tot *= arr[i];
        }
        cout << tot << '\n';
    }
}