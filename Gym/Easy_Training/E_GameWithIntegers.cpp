#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(n % 3 == 0){
            puts("Second");
        }else{
            puts("First");
        }
    }
}