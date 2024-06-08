#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string atas, bawah;
        cin >> atas >> bawah;
        int a = 0, b = 0;
        for(int i = 0; i < n; i++){
            if(atas[i] != bawah[i]){
                if(atas[i] == '1') a++;
                else if(bawah[i] == '1') b++;
            }
        }
        cout << min(a, b) + abs(a-b) << '\n';
    }
}