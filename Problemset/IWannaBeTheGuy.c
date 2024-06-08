#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[101] = {};
    int p;
    scanf("%d",&p);
    int arrx[p];
    for(int i = 0; i < p; i++){
        scanf("%d",&arrx[i]);
        arr[arrx[i]]++;
    }
    int q;
    scanf("%d",&q);
    int arry[q];
    for(int i = 0; i < q; i++){
        scanf("%d",&arry[i]);
        arr[arry[i]]++;
    }
    // printf("%d\n",arr[n]);
    int flag = 1;
    for(int i = 1; i <= n; i++){
        if(arr[i] <= 0){
            flag = 0;
            break;
        }
    }
    if(flag) printf("I become the guy.\n");
    else printf("Oh, my keyboard!\n");
}