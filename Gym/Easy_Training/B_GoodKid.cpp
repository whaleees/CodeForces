#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v;
        for(int i = 0; i < n; i++){
            int num; cin >> num;
            v.push_back(num);
        }
        sort(v.begin(), v.end());
        v[0]++;
        int sum = 1;
        for(auto x : v){
            sum *= x;
        }
        cout << sum << '\n';
    }
}