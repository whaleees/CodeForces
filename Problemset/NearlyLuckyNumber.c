#include <stdio.h>
#define ll long long

int main(){
    ll n, cnt = 0;
    scanf("%lld",&n);
    while(n > 0){
        ll temp = n % 10;
        if(temp == 4 || temp == 7){
            cnt++;
        }
        n /= 10;
    }
    if(cnt == 4 || cnt == 7) printf("YES\n");
    else printf("NO\n");
}