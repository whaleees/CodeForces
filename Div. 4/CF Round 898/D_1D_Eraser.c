#include <stdio.h>
#include <string.h>

int main(){
    int tc;
    scanf("%d",&tc);
    while(tc--){
        int n,k;
        scanf("%d%d",&n,&k);
        char str[n];
        int cnt = 0;
        scanf("%s",&str);
        for(int i = 0; i < strlen(str); i++){
            int temp = k;
            if(str[i] == 'B'){
                cnt++;
                i += k-1;

            }
        }
        printf("%d\n",cnt);
    }
}