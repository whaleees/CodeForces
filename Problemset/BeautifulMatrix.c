#include <stdio.h>
#include <math.h>

int main(){
    int x[5][5];
    int ans = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            scanf("%d",&x[i][j]);
            if(x[i][j] == 1){
                ans = abs(i - 2) + abs(j - 2);
            }
        }
    }
    printf("%d\n",ans);
}