#include <stdio.h>
#include <string.h>

int main(){
    int tc;
    scanf("%d",&tc);
    char dest[] = "Timur";
    while(tc--){
        int n;
        scanf("%d",&n);
        char x[n];
        scanf("%s",&x);
        if(n != 5){
            printf("NO\n");
            continue;
        }
        int cnt = 0;
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 5; j++){
                if(dest[i] == x[j]){
                    cnt++;
                    break;
                } 
            }
        }
        if(cnt == 5) printf("YES\n");
        else printf("NO\n");
    }
}