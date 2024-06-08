#include <stdio.h>

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    char x;
    int flag = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf(" %c",&x);
            if(x == 'C' || x == 'Y' || x == 'M'){
                flag = 0;
            }
        }
    }
    if(flag){
        printf("#Black&White\n");
    }else{
        printf("#Color\n");
    }
}