#include<stdio.h>
int factorial(int n){
    if (n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
    
}
int main(){
    int num;
    printf("Program ran by-Aryan Maharjan\n");
    printf("Find the factorial of:");
    scanf("%d",&num);
    printf("The factorial of %d is %d",num,factorial(num));
    return 0;
}