#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int cmpfnc(const void *a, const void *b){
    return  (*(int*)a - *(int*)b);
}

int main(){
    int tc;
    scanf("%d",&tc);
    while(tc--){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i = 0; i < n; i++){
            scanf("%d",&arr[i]);
        }
        // qsort(arr, n, sizeof(int), cmpfnc);
        // for(int i = 0; i < n; i++){
        //     printf("%d\n",arr[i]);
        // }
        int tot = 0;
        for(int i = 0; i < n; i++){
            tot += abs(arr[i]);
        }
        printf("%d\n",tot);
    }
}