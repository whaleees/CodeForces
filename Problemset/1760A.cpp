#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int a[3];
        for(int i = 0; i < 3; i++) scanf("%d", &a[i]);
        sort(a, a+3);
        printf("%d\n", a[1]);
    }
}