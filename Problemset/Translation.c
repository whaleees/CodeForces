#include <stdio.h>
#include <string.h>

int main(){
    char str1[200], str2[200];
    scanf("%s%s",&str1,&str2);
    int j = strlen(str2);
    int flag = 1;
    for(int i = 0; i < strlen(str1); i++){
        if(str1[i] != str2[j - i - 1]){
            printf("NO\n");
            flag = 0;
            break;
        }
    }
    if(flag) printf("YES\n");
}