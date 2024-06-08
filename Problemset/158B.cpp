#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n;
    int arr[n + 1];

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    // Sort the array in descending order, starting from index 1 to n
    sort(arr + 1, arr + n + 1, greater<int>());

    int ans = 0, tmp1 = 0, tmp2 = 0, tmp3 = 0;

    for(int i = 1; i <= n; i++){
        if(arr[i] == 4) ans++;
        else if(arr[i] == 3){
            ans++;
            tmp3++;
        }else if(arr[i] == 2){
            if(tmp2 != 0){
                tmp2 -=2;
            }else if(tmp1 >= 2){
                tmp1 -= 2;
            }else{
                tmp2 += 2;
                ans++;
            }
        }else if(arr[i] == 1){
            if(tmp1 != 0){
                tmp1--;
            }else if(tmp3 != 0){
                tmp3--;
            }else if(tmp2 != 0){
                tmp2--;
            }else{
                tmp1 += 3;
                ans++;
            }
        }
    }

    cout << ans << '\n';

    return 0;
}
