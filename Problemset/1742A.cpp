#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int arr[3];
        for(int i = 0; i < 3; i++){
            cin >> arr[i];
        }
        sort(arr,arr+3);
        arr[2] -= (arr[0]+arr[1]);
        if(arr[2] == 0) puts("YES");
        else puts("NO");
    }
}