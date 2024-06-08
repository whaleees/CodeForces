#include <stdio.h>
#include <string.h>

int main(){
    int tc;
    scanf("%d",&tc);
    while(tc--){
        int n;
        scanf("%d",&n);
        char str[n];
        scanf("%s",&str);
        int awal = 0, akhir = 0;
        for(int i = 0; i < n; i++){
            if(str[i] == 'B') awal = i;
        }
        for(int i = n - 1; i >= 0; i--){
            if(str[i] == 'B') akhir = i;
        }
        printf("%d\n",awal - akhir + 1);
    }
}