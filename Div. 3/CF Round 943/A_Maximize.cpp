#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    else return gcd(b, a % b);
}

int main(){
    int t; scanf("%d", &t);
    while(t--){
        int n; scanf("%d", &n);
        int max = gcd(n, 1) + 1, index = 1;
        for(int i = 2; i < n; i++){
            int current = gcd(n, i) + i;
            if(current >= max){
                max = current;
                index = i;
            }
        }
        printf("%d\n", index);
    }
}