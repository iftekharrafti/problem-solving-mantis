// Code Link: https://codeforces.com/problemset/problem/791/A

#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d", &a, &b);

    int year = 0;
    while(a<=b){
        year++;
        a*=3;
        b*=2;
    }
    printf("%d\n", year);
    return 0;
}