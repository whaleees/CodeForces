#include <bits/stdc++.h>
using namespace std;

int main(){
    int k,r, ans = 0, tot = 0;
    cin >> k >> r;
    while(1){
        if(tot % 10 == 0 && tot != 0 || tot % 10 == r){
            break;
        }
        ans++;
        tot += k;
    }
    cout << ans;
}