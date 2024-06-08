#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int x, y, n;
        scanf("%d%d%d", &x, &y, &n);
        if(n - (n % x) + y <= n)
        printf("%d\n", n - (n % x) + y);
        else
        printf("%d\n", n - (n % x) - (x - y));
    }
}