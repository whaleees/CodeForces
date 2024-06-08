#include <bits/stdc++.h>
using namespace std;

int main(){
    int s, n; cin >> s >> n;
    using T = pair<int, int>;
    priority_queue<T, vector<T>, greater<T>> pq;

    while(n--){
        int a, b; cin >> a >> b;
        pq.push(make_pair(a, b));
    }
    
    int power = s, flag = 1;
    while(!pq.empty()){
        auto c = pq.top();
        pq.pop();

        int a = c.first;
        int b = c.second;

        if(power > a){
            power += b;
            continue;
        }else{
            flag = 0;
            break;
        }

        // cout << a << " " << b << '\n';
    }

    if(flag) puts("YES");
    else puts("NO");
}