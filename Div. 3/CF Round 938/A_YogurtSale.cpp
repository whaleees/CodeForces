#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, a, b;
        scanf("%d%d%d", &n, &a, &b);
        if(n % 2 == 0){
            if(a * 2 <= b){
                printf("%d\n", n * a);
            }else{
                printf("%d\n", (n / 2) * b);
            }
        }else{
            if(a * 2 <= b){
                printf("%d\n", n * a);
            }else{
                printf("%d\n", ((n / 2) * b) + a);
            }
        }
    }
}