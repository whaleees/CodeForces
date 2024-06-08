#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    else return gcd(b, a % b); 
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        printf("%d\n", n/2);
    }
}