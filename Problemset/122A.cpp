#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    if(n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 74 == 0){
        puts("YES");
        return 0;
    }
    while(n != 0){
        int temp = n % 10;
        n /= 10;
        // cout << temp << " ";
        if(temp != 4 && temp != 7){
            puts("NO");
            return 0;
        }
    }
    puts("YES");
}