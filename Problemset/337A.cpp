#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector<int> puzzle(m + 1);

    for(int i = 1; i <= m; i++){
        cin >> puzzle[i];
    }

    sort(puzzle.begin(), puzzle.end());

    // for(int i = 1; i <= m; i++){
    //     cout << puzzle[i] << '\n';
    // }

    int least = puzzle[n] - puzzle[1];
    for(int i = 1; i <= m - n + 1; i++){
        if(puzzle[i + n - 1] - puzzle[i] < least){
            least = puzzle[i + n - 1] - puzzle[i];
        }
    }

    cout << least << '\n';
}

/*
4

5 7 10 10 12 22

5 7 10 10 -> 5
7 10 10 12 -> 5
10 10 12 22 -> 10
*/