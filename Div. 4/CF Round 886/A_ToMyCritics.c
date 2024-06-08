#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void* b) { 
    return (*(int*)a - *(int*)b);
}

int main(){
    int tc;
    scanf("%d",&tc);
    while(tc--){
        int arr[3];
        for(int i = 0; i < 3; i++){
            scanf("%d",&arr[i]);
        }
        qsort(arr, 3, sizeof(int), cmpfunc);
        if(arr[1] + arr[2] >= 10) printf("YES\n");
        else printf("NO\n");
    }
}