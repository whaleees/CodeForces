#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(a == 0) return b;
    else return gcd(b % a, a);
}

int main(){
    int a,b;
    scanf("%d%d", &a, &b);
    int pembilang = 6 - max(a, b) + 1;
    printf("%d/%d\n",pembilang/gcd(pembilang, 6), 6/gcd(pembilang, 6));
}