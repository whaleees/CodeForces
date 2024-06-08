#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        vector<string> grid(n);
        for(int i = 0; i < n; i++){
            cin >> grid[i];
        }

        string name = "vika";
        int cnt = 0;
        for(int j = 0; j < m; j++){
            for(int i = 0; i < n; i++){
                if(grid[i][j] == name[cnt]){
                    cnt++; break;
                }
            }
            if(cnt == 4) break;
        }

        if(cnt == 4) puts("YES");
        else puts("NO");
    }
}