// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
//         s.substr
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     string s1,s2;
//     cin >> s1 >> s2;
//     size_t found = s1.find(s2);
//     if(found != string::npos){
//         cout << "Substring in index : " << found << endl;
//     }else{
//         cout << "gada nying";
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        int mp = 0, m = 0, p = 0;
        string s;
        cin >> n >> s;
        size_t mapie = s.find("mapie");
        if(mapie != string::npos) mp++;
        size_t map = s.find("map");
        if(map != string::npos) m++;
        size_t pie = s.find("pie");
        if(pie != string::npos) p++;
        if(mp > 0){
            cout << mp + m + p - 1 << endl; 
        }else{
            cout << m + p << endl;
        }
// mapmapiepie mp = 1 m = 2 p = 1 output : 2
    }
}