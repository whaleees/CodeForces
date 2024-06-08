#include <stdio.h>

int main(){
    int k,l,m,n,d;
    scanf("%d%d%d%d%d",&k,&l,&m,&n,&d);
    int cnt = 0;
    int temp = d;
    d += 1;
    while(d--){
        if(d == 0) break;
        if(d % k == 0 || d % l == 0 || d % m == 0 || d % n == 0){
            cnt ++;
        }
    }
    printf("%d\n",cnt);
}