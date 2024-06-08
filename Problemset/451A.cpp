#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, m; cin >> n >> m;

    if(n > m) swap(n, m);

    if(n % 2 == 0) puts("Malvika");
    else puts("Akshat");
}