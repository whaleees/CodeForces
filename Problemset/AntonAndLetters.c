// #include <stdio.h>
// #include <string.h>

// int main(){
//     char x;
//     int arr[30] = {};
//     while(scanf("%c",&x) != EOF){
//         if(x >= 'a' && x <= 'z'){
//             x -= 'a';
//             arr[x]++;
//         }
//     }
//     for(int i = 0; i < 26; i++){
//         printf("%d\n",arr[i]);
//     }
//     return 0;
// }


#include <stdio.h>

int main(){
    int a;
    while (scanf("%d",&a) != EOF)
    {
        if(a % 2 == 0){
            flag = 0;
            break;
        }
    }
    
}