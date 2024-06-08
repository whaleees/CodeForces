#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        map < int, int > m;
        // int arr[n] = {};
        for(int i = 0; i < n; i++){
            int num; cin >> num;
            m[num]++;
        }
        // int i = 0; 
        while(n > k){
            auto it = m.begin();
            if(it == m.end()) it = m.begin();
            if(m[it] == k){
                n--;
                
            }
            it++;
        }
    }
}