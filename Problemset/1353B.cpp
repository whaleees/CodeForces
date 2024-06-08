#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n], b[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        sort(a, a+n);
        sort(b, b+n);
        int max = n-1, min = 0;
        while(k--){
            if(b[max] > a[min]) a[min] = b[max];
            min++; max--;
        }
        int tot = 0;
        for(int i = 0; i < n; i++){
            tot += a[i];
        }
        cout << tot << endl;
    }
}