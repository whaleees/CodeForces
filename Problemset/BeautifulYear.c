#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    while(1){
        int a,b,c,d,present;
        n++;
        present = n;
        a = n % 10;
        n /= 10;
        b = n % 10;
        n /= 10;
        c = n % 10;
        n /= 10;
        d = n % 10;
        if(a != b && a != c && a != d && b != c && b != d && c != d){
            printf("%d\n",present);
            break;
        }
        n = present;
    }
}