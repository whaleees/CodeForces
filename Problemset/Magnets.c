#include <stdio.h>

int main(){
    int n, cnt = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int temp = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] != temp){
            temp = arr[i];
            cnt++;
        }
    }
    printf("%d\n",cnt+1);
}