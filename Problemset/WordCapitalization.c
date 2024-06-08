#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char x[10001];
    scanf("%s",&x);
    x[0] = toupper(x[0]);
    printf("%s",x);
}
