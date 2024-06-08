#include <stdio.h>
#define ll long long
#include <math.h>

int main(){
    ll tc;
    scanf("%lld",&tc);
    while(tc--){
        ll x;
        scanf("%lld",&x); 
        ll angka[x];
        ll genap = 0, ganjil = 0, beda = 0;
        for(ll i = 1; i <= x; i++){
            scanf("%lld",&angka[i]);
            if(i % 2 == 0) genap += angka[i];
            else ganjil += angka[i];        
        }
        if(ganjil > genap){
            beda = ganjil - genap;
            for(ll i = 1; i <= x; i+=2){
                
            }
        }
        else beda = genap - ganjil;
        if(beda == 0){
            printf("YES\n");
            break;
        }
    }
}