#include <stdio.h>

int main(){
    int tc;
    scanf("%d",&tc);
    while(tc--){
        int n;
        scanf("%d",&n);
        int a[n], b[n];
        for(int i = 0; i < n; i++){
            scanf("%d%d",&a[i],&b[i]);
        }
        for(int i = 0; i < n; i++){
            if(a[i] > 10) b[i] = -1;
        }
        int index = 0, max = b[0];
        for(int i = 1; i < n; i++){
            if(b[i] > max){
                max = b[i];
                index = i;
            }
        }
        printf("%d\n",index+1);
    }
}