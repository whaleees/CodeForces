#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int h,m;
        int sep;
        scanf("%d%c%d",&h,&sep,&m);
        if(h == 0){
            if(m > 9){
                printf("12:%d AM\n",m);
            }else if(m == 0){
                printf("12:00 AM\n");
            }else{
                printf("12:0%d AM\n",m);
            }
        }else if(h == 12){
            if(m > 9){
                printf("12:%d PM\n",m);
            }else if(m == 0){
                printf("12:00 PM\n");
            }else{
                printf("12:0%d PM\n",m);
            }
        }else if(h < 12){
            if(h < 10){
                if(m > 9){
                    printf("0%d:%d AM\n",h,m);
                }else if(m == 0){
                    printf("0%d:0%d AM\n",h,m);
                }else{
                    printf("0%d:0%d AM\n",h,m);
                }
            }else{
                if(m > 9){
                    printf("%d:%d AM\n",h,m);
                }else if(m == 0){
                    printf("%d:0%d AM\n",h,m);
                }else{
                    printf("%d:0%d AM\n",h,m);
                }
            }
        }else{
            h %= 12;
            if(h < 10){
                if(m > 9){
                    printf("0%d:%d PM\n",h,m);
                }else if(m == 0){
                    printf("0%d:0%d PM\n",h,m);
                }else{
                    printf("0%d:0%d PM\n",h,m);
                }
            }else{
                if(m > 9){
                    printf("%d:%d PM\n",h,m);
                }else if(m == 0){
                    printf("%d:0%d PM\n",h,m);
                }else{
                    printf("%d:0%d PM\n",h,m);
                }
            }
        }
    } 
}