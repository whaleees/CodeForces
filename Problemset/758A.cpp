#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int beda = 0;
    for(int i = 0; i < n; i++){
        beda += (arr[n-1] - arr[i]);
    }
    cout << beda;
}

/*
1 3 1
1 1 3
2 2 
*/