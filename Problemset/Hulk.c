#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    if(x % 2 == 1){
    while(x--){
        printf("I ");
        if(x % 2 == 0) printf("hate ");
        else if(x % 2 == 1) printf("love ");
        if(x != 0){
            printf("that ");
        }
    }
    printf("it");
    }else if(x % 2 == 0){
        while(x--){
        printf("I ");
        if(x % 2 == 1) printf("hate ");
        else if(x % 2 == 0) printf("love ");
        if(x != 0){
            printf("that ");
        }
    }
    printf("it");
    }
}