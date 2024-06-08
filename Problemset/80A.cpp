#include <bits/stdc++.h>
using namespace std;

int prime[51] = {};
int ind = 0;

void func(){
    for(int i = 2; i < 50; i++){
        int flag = 1;
        for(int j = 2; j <= sqrt(i); j++){
            if(i % j == 0){
                flag = 0;
                break;
            }
        }
        if(flag){
            prime[ind] = i;
            ind++;
        }
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    func();
    for(int i = 0; i < ind; i++){
        if(prime[i] == n && prime[i+1] == m){
            puts("YES");
            return 0;
        }
    }
    puts("NO");
    return 0;
}