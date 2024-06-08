#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int maxv = 0, minv = 101, maxi = 0, mini = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] > maxv){
            maxi = i;
            maxv = arr[i];
        }
        if(arr[i] <= minv){
            mini = i;
            minv = arr[i];
        }
    }
    if(maxi > mini){
        cout << (maxi - 1) + (n - mini) - 1;
    }else{
        cout << (maxi - 1) + (n - mini);
    }
}