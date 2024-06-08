#include <bits/stdc++.h>
using namespace std;

/*
######### flag = 1
........# flag = 2 1
######### flag = 3
#........ flag = 4 2
######### flag = 5
........# flag = 6 3
######### flag = 7
#........ flag = 8
#########
*/

int main(){
    int n,m;
    cin >> n >> m;
    int hst = 1;
    for(int i = 1; i <= n; i++){
        int on = 1;
        int ph = 0;
        for(int j = 1; j <= m; j++){
            if(i % 2 == 1){             //hastag tok
                cout << "#";
            }else{
                if(hst % 2 == 1){
                    if(j == m) break;
                    ph = 1;
                    cout << ".";
                }else{
                    if(j == m) break;
                    if(on){
                        cout << "#";
                        on = 0;
                    }
                    cout << ".";
                }
            }
        }
        if(i % 2 == 0) hst++;
        if(ph) cout << "#";
        cout << endl;
    }
}