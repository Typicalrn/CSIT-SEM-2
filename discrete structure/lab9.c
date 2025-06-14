#include<stdio.h>

int main(){
    printf("Program ran by-Aryan Maharjan\n");
    char p[]={'F','F','T','T'};
    int a[]={0,0,1,1};
    char q[]={'F','T','F','T'};
    int b[]={0,1,0,1};

    char negp,negq,pConjq,pDisq,pImq,pBimpq;

    printf("Truth Table for compound propositions\n");
    printf("p\tq\t~p\t~q\tp^q\tpvq\tp->q\tp<->q");

    for (int i = 0; i < 4; i++)
    {
        if (a[i]==1){
            negp='F';
        }else{
            negp='T';
        }

        if (b[i]==1){
            negq='F';
        }else{
            negq='T';
        }

        if (a[i]==1 && b[i]==1)
        {
            pConjq='T';
        }
        else
        {
            pConjq='F';
        }

        if (a[i]==1 || b[i]==1)
        {
            pDisq='T';
        }
        else
        {
            pDisq='F';
        }

        if ((a[i] == 0 || b[i] == 1)) {
            pImq = 'T';
        } else {
            pImq = 'F';
        }

        if (a[i] == b[i]) {
            pBimpq = 'T';
        } else {
            pBimpq = 'F';
        }


        printf("\n%c\t%c\t%c\t%c\t%c\t%c\t%c\t%c",p[i],q[i],negp,negq,pConjq,pDisq,pImq,pBimpq);
    }
    

    return 0;
}