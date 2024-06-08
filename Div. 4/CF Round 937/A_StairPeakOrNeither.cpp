#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,c;
        scanf("%d%d%d", &a, &b, &c);
        if(a < b && b < c) puts("STAIR");
        else if(a < b && b > c) puts("PEAK");
        else puts("NONE");
    }
}