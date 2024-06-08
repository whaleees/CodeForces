#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    char s[10];
    deque<int> arr[n];
    for(int i = 0; i < n; i++){
        cin >> s[i];
        if(s[i] == 'L') arr->push_front(1);
        else if(s[i] == 'R') arr->push_back(1);
        else arr[s[i]]--;
    }
}