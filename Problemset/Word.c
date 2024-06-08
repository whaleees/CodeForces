#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char x[101];
    int upper = 0, lower = 0;
    scanf("%s",&x);
    for(int i = 0; i < strlen(x); i++){
        if(x[i] >= 65 && x[i] <= 90) upper++;
        else if(x[i] >= 97 && x[i] <= 122) lower++;
    }
    for(int i = 0; i < strlen(x); i++){
        if(upper > lower) x[i] = toupper(x[i]);
        else if(lower > upper) x[i] = tolower(x[i]);
        else if(lower == upper) x[i] = tolower(x[i]);
    }
    printf("%s\n", x);
}