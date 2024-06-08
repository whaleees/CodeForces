#include <stdio.h>
#include <string.h>

int main(){
    int n, a = 0, d = 0;
    scanf("%d",&n);
    char str[n];
    scanf("%s",&str);
    for(int i = 0; i < n; i++){
        if(str[i] == 'A') a++;
        else if(str[i] == 'D') d++;
    }
    if(a > d) printf("Anton\n");
    else if(d > a) printf("Danik\n");
    else if(d == a) printf("Friendship\n");
}