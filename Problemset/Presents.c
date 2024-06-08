#include <stdio.h>

int main(){
    int n, j = 1;
    scanf("%d",&n);
    int urutan[n+1];
    int print[n+1];
    while(n--){
        int angka;
        scanf("%d",&angka);
        print[angka] = j;
        j++;
    }
    for(int i = 1; i < j; i++){
        printf("%d ",print[i]);
    }
}