#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int angka1,angka2,angka3;
        scanf("%d%d%d",&angka1,&angka2,&angka3);
        if(angka1 != angka2){
            if(angka1 != angka3) printf("%d\n",angka1);
            else printf("%d\n",angka2);
        }else{
            printf("%d\n",angka3);
        }
    }
}