#include <stdio.h>
#include <math.h>

int main(){
    int tc;
    scanf("%d", &tc);
    int x[4] = {};
    int y[4] = {};
    for(int i = 0; i < tc; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d%d",&x[j],&y[j]);
        }
        int xx = 0, yy = 0;
        for(int j = 0; j < 3; j++){
            if(abs(x[j] - x[j+1]) != 0){
                xx = abs(x[j] - x[j+1]);
            }
            if(abs(y[j] - y[j+1]) != 0){
                yy = abs(y[j] - y[j+1]);
            }
        }
        printf("%d\n",xx*yy);
    }
}