#include <stdio.h>

int main(){
    int x, flag = 1;
    scanf("%d",&x);
    while(x--){
        int angka;
        scanf("%d",&angka);
        if(angka == 1){
            flag = 0;
            printf("HARD\n");
            break;
        }
    }
    if(flag) printf("EASY\n");
}