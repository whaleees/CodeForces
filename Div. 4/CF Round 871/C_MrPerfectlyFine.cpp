#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        priority_queue<int, vector<int>, greater<int>> s1, s2, s3;
        for(int i = 0; i < n; i++){
            int time;
            char s[3];
            scanf("%d%s",&time, &s);
            if(strcmp(s, "01") == 0){
                s1.push(time);
            }else if(strcmp(s, "10") == 0){
                s2.push(time);
            }else if(strcmp(s, "11") == 0){
                s3.push(time);
            }
        }
        if(s1.empty() || s2.empty()){
            if(!s3.empty()){
                printf("%d\n", s3.top());
            }else{
                puts("-1");
            }
        }else{
            if(!s3.empty()){
                if(s1.top() + s2.top() < s3.top()){
                    printf("%d\n",s1.top() + s2.top());
                }else{
                    printf("%d\n", s3.top());
                }
            }else{
                printf("%d\n", s1.top() + s2.top());
            }

        }
    }
}