#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c; cin >> a >> b >> c;

    int tmp1 = (a + b) * c;
    int tmp5 = a * (b + c);
    int tmp2 =  (a * b) + c;
    int tmp6 = a + (b * c);
    int tmp3 = a + b + c;
    int tmp4 = a * b * c;

    cout << max(max(tmp1, max(tmp2, tmp3)), max(tmp4, max(tmp5, tmp6)));
}

/*
+*
*+
++
*/