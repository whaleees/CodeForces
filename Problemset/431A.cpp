#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    char x[100001];
    scanf("%s", x);
    int cal = 0;
    for(int i = 0; i < strlen(x); i++){
        if(x[i] == '1') cal += a;
        else if(x[i] == '2') cal += b;
        else if(x[i] == '3') cal += c;
        else if(x[i] == '4') cal += d;
    }
    printf("%d\n",cal);
}