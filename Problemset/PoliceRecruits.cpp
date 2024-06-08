#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 0, temp = 0;
    while(n--){
        int num;
        cin >> num;
        if(num == -1){
            if(!temp) ans++;
            else temp--;
        }else{
            temp += num;
        }
    }
    cout << ans;
}