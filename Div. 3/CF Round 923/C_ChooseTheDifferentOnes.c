// #include <stdio.h>
// #define ll long long

// int main(){
//     int tc;
//     scanf("%d",&tc);
//     while(tc--){
//         ll a,b,k;
//         scanf("%lld%lld%lld",&a,&b,&k);
//         ll arr[k+1] = {}, alp[a+1] = {}, brv[b+1] = {};
//         ll batas = 0;
//         for(ll i = 0; i < a; i++){
//             scanf("%lld",&alp[i]);
//         }
//         for(ll i = 0; i < b; i++){
//             scanf("%lld",&brv[i]);
//         }
//         for(ll i = 0; i < a; i++){
//             if(alp[i] <= k){
//                 if(arr[alp[i]] > 0) continue;
//                 arr[alp[i]]++;
//                 batas++;
//             }
//             if(batas == k/2){
//                 batas = 0;
//                 break;
//             }
//         }
//         for(ll i = 0; i < b; i++){
//             if(brv[i] <= k){
//                 if(arr[brv[i]] > 0) continue;
//                 arr[brv[i]]++;
//                 batas++;
//             }
//             if(batas == k/2){
//                 break;
//             }
//         }
//         int flag = 1;
//         for(ll i = 1; i <= k; i++){
//             printf("%lld\n",arr[i]);
//             if(arr[i] == 0){
//                 flag = 0;
//                 break;
//             }
//         }
//         // if(flag) printf("YES\n");
//         // else printf("NO\n");
//     }
// }

#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(){
    int a,b,k;
    scanf("%d%d%d",&a,&b,&k);
    int alp[a],brv[b],arr[k];
    for(int i = 0; i < a; i++){
        scanf("%d",&alp[i]);
    }
    for(int i = 0; i < b; i++){
        scanf("%d",&brv[i]);
    }
    qsort(alp, a, sizeof(int), cmpfunc);
    qsort(brv, b, sizeof(int), cmpfunc);
    int batas = 0;
    printf("")
}
