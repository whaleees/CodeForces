// #include <bits/stdc++.h>
// using namespace std;

// /*
// 1 2 3 4
// 3 2 1 0
// */

// int main(){
//     int t;
//     scanf("%d", &t);
//     while(t--){
//        int n, k, ans = 1;
//        scanf("%d%d", &n, &k);
//        int bridges = (n*(n-1)) / 2;
//     //    printf("%d\n", bridges); 
//        if(bridges > k){
//             bridges -= k;
//        }else if(bridges == k){
//             bridges = 0;
//        }
//        while(bridges > 0){
//             bridges -= ans;
//             ans++;
//        }
//        printf("%d\n", ans);
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, k;
        scanf("%d%d", &n, &k);
        int curr = n-1;
        int bridges = (n * (n-1)) / 2;
        if(k == curr || k > curr){
            printf("1\n");
        }else if(k < curr){
            printf("%d\n", n);
        }
    }
}