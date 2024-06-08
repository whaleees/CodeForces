#include <stdio.h>
#define ll long long
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(){
    ll arr[10];
    for(ll i = 0; i < 4; i++){
        scanf("%lld",&arr[i]);
    }
    ll cnt = 0;
    qsort(arr, 4, sizeof(long long), cmpfunc);
    for(ll i = 0; i < 4; i++){
        // printf("%lld\n",arr[i]);
        if(arr[i] == arr[i+1]) cnt++;
    }
    printf("%lld\n",cnt);
}