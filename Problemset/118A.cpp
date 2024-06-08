#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    for(auto c : s){
        c = tolower(c);
        if(c != 'a' && c != 'i' && c != 'u' && c != 'e' && c != 'o' && c != 'y'){
            cout << "." << c;
        }
    }
}