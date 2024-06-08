#include <stdio.h>
#include <stdlib.h>

int cmpfnc(const void *a, const void *b){
    return ( *(int*)a - *(int*)b );
}

/*
strongest from a - weakest from b
5
3 1 2 6 4
1 2 3 4 6
A = 1 2 4
B = 3 6
4 - 3 = 1

6
2 1 3 2 4 3
1 2 2 3 3 4

A =  
*/
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
        qsort(arr, n, sizeof(int), cmpfnc);
        int min = arr[1] - arr[0];
        for(int i = 0; i < n-1; i++){
            if(arr[i+1] - arr[i] < min){
                min = arr[i+1] - arr[i];
            }
        }
        printf("%d\n",min);
    }
}