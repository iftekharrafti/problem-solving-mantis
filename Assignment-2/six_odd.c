// Read an integer value X and print the 6 consecutive odd numbers from X, a value per line, including X if it is the case.
// Input: The input will be a positive integer value.   input: 8
// output: The output will be a sequence of six odd numbers.    output: 9,11,13,15,17,19

#include <stdio.h>

int main(){
    /* 
        Team Mantis!
        Solving problem '3';
    */
    int i, X;
    printf("Enter your Digit: ");
    scanf("%d",&X);

    for (i = X; i < X+12; i++)
    {
        if(i%2 == 1){
            printf("%d\n", i);
        }
    }
    
}