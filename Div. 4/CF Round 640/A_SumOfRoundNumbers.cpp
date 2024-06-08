// #include <stdio.h>
// #include <string.h>

// void funct(char x[], int *cnt){
//     for(int i = 0; i < strlen(x); i++){
//         if(x[i] >= '1' && x[i] <= '9'){
//             (*cnt)++;
//         }
//     }
//     printf("%d\n",*cnt);
//     for(int i = 0; i < strlen(x); i++){
//             if(x[i] >= '1' && x[i] <= '9'){
//                 int temp = strlen(x) - i - 1;
//                 printf("%c",x[i]);
//                 while(temp--){
//                     printf("0");
//                 }
//                 printf(" ");
//             }
//         }
//         puts("");
//     }

// int main(){
//     int tc;
//     scanf("%d",&tc);
//     while(tc--){
//         int cnt = 0;
//         char x[10];
//         scanf("%s",&x);
//         funct(x, &cnt);
//     }       
// }

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v;
        int i = 0, d = 1;
        while(n > 0){
            if(n % 10 > 0) v.push_back((n % 10) * d);
            n /= 10;
            d *= 10;
        }
        cout << v.size() << endl;
        for(int i = 0; i < v.size(); i++){
            cout << v[i] << " ";
        }
        puts(" ");
    }
}