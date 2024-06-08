#include <stdio.h>

int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    int urutan[n+1];
    for(int i = 1; i <= n; i++){
        scanf("%d",&urutan[i]);
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(urutan[i] > 0){
            if(urutan[i] >= urutan[k]) cnt++;
        }
    }
    printf("%d\n",cnt);   

}