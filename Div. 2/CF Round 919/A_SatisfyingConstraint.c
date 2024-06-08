// #include <stdio.h>
// #include <math.h>
// #define ll long long 


// int main(){
//     ll tc;
//     scanf("%lld",&tc);
//     ll angka[100000001] = {};
//     while(tc--){
//         ll n;
//         scanf("%lld",&n);
//         ll a,x;
//         while(n--){
//             scanf("%lld%lld",&a,&x);
//             if(a == 1){
//                 for(int i = 1; i < x; i++){
//                     angka[i] = -1;
//                 }
//             }else if(a == 2){
//                 for(int i = 100000001; i > x; i--){
//                     angka[i] = -1;
//                 }
//             }else if(a == 3){
//                 angka[x] = -1;
//             }
//         }
//         ll count = 0;
//         for(int i = 1; i <= 100000001; i++){
//             if(angka[i] != -1){
//                 count++;
//             } 
//         }
//         printf("%lld",count);
//     }
// }

#include <stdio.h>
#define ll long long

int main(){
    ll tc;
    scanf("%lld",&tc);
    while (tc--){
        ll n;
        scanf("%lld",&n);
        ll min = 1, max = 1000000001;
        ll count = 0;
        while(n--){
            ll a,x;
            scanf("%lld%lld",&a,&x);
            if(a == 1){
                min = x;
            }else if(a == 2){
                max = x;
            }else if(a == 3 & x <= max && x >= min){
                count++;
            }
        }
        if(min > max) printf("0\n");
        else printf("%lld\n",max - min - count + 1);

    }
    
}