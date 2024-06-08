#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    while(n--){
        int a, b; cin >> a >> b;
        int temp = b - a;
        if(a >= b){
            if(!(temp & 1)){
                puts("YES");
            }else
                puts("NO");
        } 
        else puts("NO");
    }
}