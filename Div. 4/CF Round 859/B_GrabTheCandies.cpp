#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        int even = 0, odd = 0;
        cin >> n;
        for(int i = 0; i < n; i++){
            int angka;
            cin >> angka;
            if(angka % 2 == 0){
                even += angka;
            }else{
                odd += angka;
            }
        }
        if(even > odd) cout << "YES\n";    
        else cout << "NO\n";
    }
}