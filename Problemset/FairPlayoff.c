#include <stdio.h>
#include <stdlib.h>

int cmpfnc(const void *a, const void* b){
    return ( *(int *)a - *(int*)b);
}

int main(){
    int tc;
    scanf("%d",&tc);
    while(tc--){
        int arr[4];
        for(int i = 0; i < 4; i++){
            scanf("%d",&arr[i]);
        }
        int ar2[4];
        for(int i = 0; i < 4; i++){
            ar2[i] = arr[i];
        }
        qsort(ar2, 4, sizeof(int), cmpfnc);
        int max1 = ar2[3], max2 = ar2[2];
        int maju1 = 0, maju2 = 0;
        if(arr[0] > arr[1]){
            maju1 = arr[0];
        }else{
            maju1 = arr[1];
        }
        if(arr[2] > arr[3]){
            maju2 = arr[2];
        }else{
            maju2 = arr[3];
        }
        if((maju1 == max1 || maju1 == max2) && (maju2 == max1 || maju2 == max2)){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
}