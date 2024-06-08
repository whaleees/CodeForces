#include <bits/stdc++.h>
using namespace std;
#define ll long long

/*
1000000000 1000000000  1000000000 
intro : 1000000000 tent : 1000000000 
extro : 1000000000  tent = : 1000000000 / 3 = 333333333 
sisa extro : 1
universal : 1000000000
extro butuh 2 univ  tent++
univ : 999,999,998 tent = 333333332
sisa univ = 2 tent++

*/
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll a,b,c;
        cin >> a >> b >> c;
        ll tent = 0;
        int flag = 1;
        tent += a;
        tent += (b/3);
        b %= 3;
        if(b == 1){
            if(c < 2) flag = 0;
            else{
                c -= 2;
                tent++;
            }
        }else if(b == 2){
            if(c < 1) flag = 0;
            else{
                c--;
                tent++;
            }
        }
        for(int i = 0; i < 2; i++){
            if(c < 3 && c > 0){
                tent++;
                c = 0;
            }else{
                tent += (c/3);
                c %= 3;
            }
        }
        if(flag) cout << tent << endl;
        else puts("-1"); 
    }
}