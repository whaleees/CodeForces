#include <stdio.h>
#define ll long long
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(ll*)a - *(ll*)b );
}

int main(){
    ll tc;
    scanf("%lld",&tc);
    while(tc--){
        ll n;
        scanf("%lld",&n);
        ll arr[n];
        for(ll i = 0; i < n; i++) scanf("%lld",&arr[i]);
        ll hasil = 0;
        qsort(arr, n, sizeof(long long), cmpfunc);
        for(ll i = 0; i < n-1; i++){
            ll temp = arr[i+1] - arr[i];
            // printf("%lld\n",temp);
            hasil += temp;
        }
        printf("%lld\n",hasil);
    }
}