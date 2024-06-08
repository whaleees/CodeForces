#include <stdio.h>
#define ll long long

int main(){
    ll a,b;
    scanf("%lld%lld",&a,&b);
    ll luas = a*b;
    if(a % 2 == 0){
        ll panjang = a/2;
        ll lebar = b*2;
        if(panjang * lebar == luas) printf("YES\n");
        else printf("NO\n");
    }else if(b % 2 == 0){
        ll panjang = b/2;
        ll lebar = a*2;
        if(panjang * lebar == luas) printf("YES\n");
        else printf("NO\n");
    }else{
        printf("NO\n");
    }
}
