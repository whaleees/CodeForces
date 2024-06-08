#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int temp = 0, penumpang = 0;
    while(n--){
        int a,b;
        scanf("%d%d",&a,&b);
        penumpang -= a;
        penumpang += b;
        if(penumpang >= temp) temp = penumpang;
    }
    printf("%d\n",temp);
}