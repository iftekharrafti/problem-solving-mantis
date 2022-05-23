#include<stdio.h>

int main(){
    int n, k;
    scanf("%d %d", &n, &k);

    for(int i=1; i<=k; i++){
        int mod = n %10;
        if(mod != 0){
            n--;
        }
        else if(mod == 0){
            n = n / 10;
        }
    }
    printf("%d\n", n);
    return 0;
}