#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int tot = 0, ans = 0;
    for(int i = 1; i <= n; i++){
        tot += 5*i;
        if(tot + k <= 240){
            ans++;
            continue;
        }
        else{
            break;
        } 
    }
    cout << ans;
}