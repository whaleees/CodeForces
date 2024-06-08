#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n], giliran = 1, temp = n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int l = 0, r = n-1;
    int s = 0, d = 0;
    while(temp--){
        if(arr[l] > arr[r]){
            if(giliran % 2 == 1){
                s += arr[l];
            }else{
                d += arr[l];
            }
            l++;
            giliran++;
        }else{
            if(giliran % 2 == 1){
                s += arr[r];
            }else{
                d += arr[r];
            }
            r--;
            giliran++;
        }
    }
    cout << s << " " << d;
}