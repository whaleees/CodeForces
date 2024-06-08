#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n], b[n];
    for(int i = 0; i < n; i++){
        scanf("%d%d",&a[i],&b[i]);
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(b[i] >= 2 && b[i] - a[i] >= 2) cnt++;
    }
    printf("%d\n",cnt);
}