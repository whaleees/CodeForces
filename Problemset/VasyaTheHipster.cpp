#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    int ans1 = 0, ans2 = 0;
    cin >> a >> b;
    if(a < b){
        ans1 += a;
        b -= a;
        a = 0; 
        ans2 = b/2;
    }else{
        ans1 += b;
        a -= b;
        b = 0;
        ans2 = a/2;
    }
    cout << ans1 << " " << ans2;
}