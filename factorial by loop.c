// C program to find factorial of a number.
#include<stdio.h>
int main(){
    int n,i;
    int factorial = 1;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i = 1; i<= n; i++){
        factorial *= i;
    }
    printf("%d",factorial);
    return 0;
}