#include <stdio.h>

int main(){
    int tc;
    scanf("%d",&tc);
    while(tc--){
        int h,m;
        scanf("%d%d",&h,&m);
        int jam = 23 - h, menit = 60 - m;
        printf("%d\n",(jam*60) + menit);
    }
}