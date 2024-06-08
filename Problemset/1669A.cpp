#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n >= 1900) puts("Division 1");
        else if(n >= 1600 && n <= 1899) puts("Division 2");
        else if(n >= 1400 && n <= 1599) puts("Division 3");
        else if(n <= 1399) puts("Division 4");
    }
}