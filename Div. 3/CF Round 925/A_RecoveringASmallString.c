#include <stdio.h>

int main(){
    int tc;
    scanf("%d",&tc);
    while(tc--){
        int x;
        scanf("%d",&x);
        if(x > 0 && x <= 3){            //aaa
            printf("aaa\n");
        }else if(x > 3 && x <= 28){     //aaz
            printf("aa");
            x -= 3;
            char c = 'a';
            c += x;
            printf("%c\n",c);
        }else if(x > 28 &&  x <= 53){   //azz
            printf("a");
            x -= 2;
            char c = 'a';
            x -= 26;
            c += x;
            printf("%cz\n",c);
        }else if(x > 53 && x <= 78){    //zzz
            x -= 53;
            char c = 'a';
            c += x;
            printf("%czz\n",c);
        }
    }
}