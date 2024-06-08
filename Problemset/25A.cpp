#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n + 1];
    vector<int> ansodd;
    vector<int> anseven;

    int odd = 0, even = 0;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        if(arr[i] % 2 == 0){
            even++;
            anseven.push_back(i);
        }else{
            odd++;
            ansodd.push_back(i);
        }
    }
    if(odd > even) cout << anseven.back();
    else cout << ansodd.back();
}