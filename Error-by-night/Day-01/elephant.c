// problem link: https://codeforces.com/problemset/problem/617/A

#include<stdio.h>

int main(){
    int x;
    scanf("%d",&x);

    int res = x / 5;
    int mod = x % 5;
    if(mod != 0){
        res++;
    }
    printf("%d\n", res);
    return 0;
}