#include <stdio.h>
#include <stdlib.h>
#define ll long long

ll cmpfnc(const void *a, const void *b){
     return (*(ll*)a - *(ll*)b);
}

int main(){
    ll tc;
    scanf("%d",&tc);
    while (tc--){
        ll a,b;
        scanf("%lld%lld",&a,&b);
        ll arr[a], cnt = 0;
        for(ll i = 0; i < a; i++){
            scanf("%lld",&arr[i]);
        }
        qsort(arr, (size_t)a, sizeof(ll), cmpfnc);
        for(ll i = 0; i < a; i++){
            printf("%lld\n",arr[i]);
        }
    }
    
}