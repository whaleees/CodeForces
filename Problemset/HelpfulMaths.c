#include <stdio.h>
#include <string.h>

int main(){
    char x[200];
    scanf("%s",&x);
    int satu = 0, dua = 0, tiga = 0, cnt = 0;
    for(int i = 0; i < strlen(x); i++){
        if(x[i] == '1') satu++;
        else if(x[i] == '2') dua++;
        else if(x[i] == '3') tiga++;
    }
    // printf("%d\n",satu);
    // printf("%d\n",dua);
    // printf("%d\n",tiga);
    int temp1 = satu, temp2 = dua;
    while(satu--){
        printf("1");
        if(satu > 0) printf("+");
    }
    if(temp1 > 0 && dua > 0) printf("+");
    while(dua--){
        printf("2");
        if(dua > 0) printf("+");
    }
    if(temp1 > 0 && tiga > 0) printf("+");
    else if(temp2 > 0 && tiga > 0) printf("+");
    while(tiga--){
        printf("3");
        if(tiga > 0) printf("+");
    }
}