#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n], even = 0, odd = 0, lostv = 0, lostd = 0;
        bool check[n];
        memset(check, false, sizeof(check));
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
            if(arr[i] % 2 == 0 && i % 2 == 0){
                even++;
            }else if(arr[i] % 2 == 1 && i % 2 == 1){
                odd++;
            }else{
                if(arr[i] % 2 == 0) lostv++;
                else lostd++;
            }
        }
        // printf("%d %d %d %d\n",even, odd, lostv, lostd);
        if(lostv != lostd) printf("-1\n");
        else{
            printf("%d\n",lostd);
        }
    }
}