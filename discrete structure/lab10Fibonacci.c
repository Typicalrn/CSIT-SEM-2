#include<stdio.h>
int Fibonacci(int n){
    if (n==0 || n==1)
    {
        return n;
    }
    else
    {
        return Fibonacci(n-1)+Fibonacci(n-2);
    }
    
}
int main(){
    int num;   
    printf("Program ran by-Aryan Maharjan\n");
    printf("Enter the number of terms in the Fibonacci series:");
    scanf("%d",&num);
    printf("The Fibonacci of %d is",num);
    for(int i=0;i<num;i++){
        printf(" %d,",Fibonacci(i));
    }
    return 0;
}