#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int min, max, arr[n], ans = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(i == 0){
            max = arr[i]; min = arr[i];
        }
        if(arr[i] < min){
            ans++;
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
            ans++;
        }
    }
    cout << ans << endl;
}