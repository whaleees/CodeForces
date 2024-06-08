#include <bits/stdc++.h>
using namespace std;

/*
ABC
BAC
BCA
CBA
CAB

*/
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int a = 0, b = 0, c = 0;
        char s;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                cin >> s;
                if(s == 'A') a++;
                else if(s == 'B') b++;
                else c++;
            }
        }
        if(a < 3) cout << "A" << "\n";
        else if(b < 3) cout << "B" << "\n";
        else cout << "C" << "\n"; 
    }
}
