#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, cnt = 0;
    scanf("%d", &t);
    while(t--){
        int a, b;
        scanf("%d%d", &a, &b);
        if(a > b) cnt++;
        else if(a < b) cnt--;
    }
    if(cnt == 0) printf("Friendship is magic!^^\n");
    else if(cnt > 0) printf("Mishka\n");
    else printf("Chris\n");
}