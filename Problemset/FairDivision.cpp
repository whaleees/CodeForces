#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n], one = 0, two = 0, total = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] == 1) one++;
            else if(arr[i] == 2) two++;
            total += arr[i];
        }
        if(total % 2 != 0) puts("NO");
        else{
            int tod = total/2;
            if(tod % 2 == 0 || (tod % 2 == 1 && one != 0)) puts("YES");
            else puts("NO");
        }
    }
}