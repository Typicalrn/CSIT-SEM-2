#include<stdio.h>

int main(){
    char A[20],B[20],U[40],I[20],D[20];
    int n1,n2,flag;
    int k1=0,k2=0,k3=0;

    printf("Enter the number of elements of set A:");
    scanf("%d",&n1);
    printf("Enter the elements of set A:");
    for (int i = 0; i < n1-1; i++)
    {
        scanf(" %c",&A[i]);
    }
    while ((getchar()) != '\n');
    printf("Enter the number of elements of set B:");
    scanf(" %d",&n2);
    printf("Enter the elements of set B:");
    for (int i = 0; i < n2-1; i++)
    {
        scanf(" %c",&B[i]);
    }
    

    //union
    for (int i = 0; i < n1; i++)
    {
        U[k1]=A[i];
        k1++;
    }
    for (int i = 0; i < n2; i++)
    {
        flag=0;
        for (int j = 0; j < n1; j++)
        {
            if (B[i]==A[j])
            {
                flag=1;
                break;
            }
            
        }  
        if (flag==0)
            {
                U[k1]=B[i];
                k1++;
            } 
    }

    //intersection
    for (int i = 0; i < n1; i++)
    {
        for ( int j = 0; j < n2; j++)
        {
            if (A[i]==B[j])
            {
                I[k2]=A[i];
                k2++;
                break;
            }
            
        }   
    }

    //difference
    for (int i = 0; i < n1; i++)
    {
        flag=0;
        for (int j = 0; j < n2; j++)
        {
            if (A[i]==B[j])
            {
                flag=1;
                break;
            }
            
        }  
        if (flag==0)
            {
                D[k3]=A[i];
                k3++;
            } 
    }

    printf("Union of A and B:");
    for (int i = 0; i < k1; i++)
    {
        printf("%c ",U[i]);
    }
    printf("\n");
    printf("Intersection of A and B:");
    for (int i = 0; i < k2; i++)
    {
        printf("%c ",I[i]);
    }
    printf("\n");
    printf("Difference of A and B:");
    for (int i = 0; i < k3; i++)
    {
        printf("%c ",D[i]);
    }
    

    return 0;
}