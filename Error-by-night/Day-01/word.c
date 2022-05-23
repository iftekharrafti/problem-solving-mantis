#include<stdio.h>
#include<string.h>

int main(){
    char word[101];
    gets(word);

    int len = strlen(word);
    int capital = 0;
    int small = 0;

    for(int i = 0; i < len; i++){
        if(word[i] >= 'A' && word[i] <= 'Z'){
            capital++;
        }
        else{
            small++;
        }
    }
    
    if(capital > small){
        for(int i = 0; i < len; i++){
            if(word[i] >= 'a' && word[i] <= 'z'){
                word[i] = word[i] - 32;
            }
        }
    }
    else{
        for(int i = 0; i < len; i++){
            if(word[i] >= 'A' && word[i] <= 'Z'){
                word[i] = word[i] + 32;
            }
        }
    }
    printf("%s\n", word);

    return 0;
}