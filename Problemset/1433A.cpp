#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; scanf("%d", &t);
    while(t--){
        char x[10]; scanf("%s", x);
        int ans = 0;
        int curr = x[0] - '1';
        // printf("%d\n", curr);
        ans += (curr * 10);
        if(strlen(x) == 1){
            ans++;
        }else if(strlen(x) == 2){
            ans += 3;
        }else if(strlen(x) == 3){
            ans += 6;
        }else if(strlen(x) == 4){
            ans += 10;
        }
        printf("%d\n", ans);
    }
}