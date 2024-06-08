#include <bits/stdc++.h>
using namespace std;

/*
2 1         2 : banyak orang yang mau dicari    1 : banyak tim
3 5         orang ke berapa yng mau dicari
5           tim nya isinya 1 - 5

5 3 
2 4 6 7 9
1 3 5

|1| 1   orang pertama gaada di list cari , jawabannya 1 orang
|2| 1 2 3   orang kedua ada di list cari, list jadi 1 3
    1 3     orang kedua ada di list cari, list jadi 1
    1       orang pertama gaada di list cari, jawabannya 1 orang
|3| 1 2 3 4 5   orang kedua sm empat ada di list cari, list jadi 1 3 5
    1 3 5       orang kedua ada di liist cari, list jadi 1 5
    1 5         orang kedua ada di list cari, list jadi 1
    1           orang 1 gaada di list cari, jawabannya 1
*/

int main(){
    int t; scanf("%d", &t);
    while(t--){
        int k, q;
        scanf("%d%d", &k, &q);
        int arrk[k + 1];
        for(int i = 1; i <= k; i++){
            scanf("%d", &arrk[i]);
        }
        int arrq[q + 1];
        for(int i = 1; i <= q; i++){
            scanf("%d", &arrq[i]);
        }
        
    }
}