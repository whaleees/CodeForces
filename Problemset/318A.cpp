#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll a, b;
    cin >> a >> b;

    if(a & 1){      //odd
        if(b == a / 2){
            cout << a - 2;
        }else if(b > a / 2){
            if(b == (a / 2) + 1) cout << a;
            else{
                ll temp = b - (a / 2) - 1;
                cout << temp * 2;
            }
        }else if(b < a / 2){
            cout << 2 * b - 1;
        }
    }else{
        if(b <= a / 2){
            cout << 2 * b - 1;
        }else{
            ll temp = b - (a / 2);
            cout << temp * 2;
        }
    }
}

/*
n = 7
1 3 5 7 2 4 6

if(b == 7 / 2(3)){
    cout << a - 2;
}else if(b > a / 2 ){ (3 >)

}
*/