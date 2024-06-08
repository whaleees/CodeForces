#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    map<int,int> m;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        m[arr[i]]++;
    }
    int minim = min(m[1], min(m[2],m[3]));
    cout << minim << '\n';
    while(minim--){
        int j = 1;
        while(j <= 3){
            for(int i = 0; i < n; i++){
                if(arr[i] == j){
                    cout << i+1 << " ";
                    arr[i] = -1;
                    j++;
                }
            }
        }
        puts("");
    }
}