#include <stdio.h>

int main(){
    int tc;
    scanf("%d",&tc);
    while(tc--){
        int n;
        scanf("%d",&n);
        int arr[n], tot = 0;
        int flg = 0;
        for(int i = 0; i < n; i++){
            scanf("%d",&arr[i]);
            tot += arr[i];
            if(arr[i] % 3 == 1){
                flg = 1;
            }
        }
        if(tot % 3 == 0){
            printf("0\n");
        }else if(tot % 3 == 2){
            printf("1\n");
        }else{
            if(flg){
                printf("1\n");
            }else{
                printf("2\n");
            }
        }
    }
}