#include <stdio.h>

int main(){
    int tc;
    scanf("%d",&tc);
    while(tc--){
        int n;
        scanf("%d",&n);
        int grid[n][n];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                scanf("%d",&grid[i][j]);
            }
        }
        int triangle = 0;
        for(int i = 0; i < n; i++){
            int cnt = 0;
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 1){
                    cnt++;
                }
            }
            if(cnt == 1){
                triangle = 1;
            }
        }
        if(triangle == 1) printf("TRIANGLE\n");
        else printf("SQUARE\n");
    }
}