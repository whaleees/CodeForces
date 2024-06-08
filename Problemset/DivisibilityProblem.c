#include <stdio.h>
#define ll long long

int main(){
    ll tc;
    scanf("%lld",&tc);
    while(tc--){
        ll a,b;
        scanf("%lld%lld",&a,&b);
        if(a % b == 0) printf("0\n");
        else printf("%lld\n", b - a%b);    
    }
}