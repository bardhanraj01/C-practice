// C program to calculate the sum of first n natural numbers via usingfunction
#include<stdio.h>
int printsum(int N){
    int sum = 0;
    for(int i = 0; i <= N; i++ ){
    sum = sum + i;
}
      return sum;
}
int main(){
    int N;
    printf("Enter the number: ");
    scanf("%d", &N);
    printf("sum = %d", printsum(N));
    return 0;
    
}
