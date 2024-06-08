#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        for(int i = 1; i <= 2*n; i++){
            for(int j = 1; j <= 2*n; j++){
                if(i % 4 == 1 || i % 4 == 2){
                    if(j % 4 == 1 || j % 4 == 2){
                        cout << "#";
                    }else if(j % 4 == 3 || j % 4 == 0){
                        cout << ".";
                    }
                }else if(i % 4 == 3 || i % 4 == 0){
                    if(j % 4 == 1 || j % 4 == 2){
                        cout << ".";
                    }else if(j % 4 == 3 || j % 4 == 0){
                        cout << "#";
                    }
                }
            }
            puts("");
        }
    }
}