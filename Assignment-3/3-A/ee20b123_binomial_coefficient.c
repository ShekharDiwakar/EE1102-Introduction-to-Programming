#include<stdio.h>
int main()
{
    long int N,K,i,NcK;
    long int Nfac=1,Kfac=1,NKfac=1,temp;//Kfac and Nfac are factorials of K and N
    printf("Enter the two numbers:");
    scanf("%ld %ld",&N,&K);
    for(i=1;i<=N;i++)
    {
        Nfac=Nfac*i;
    }
    for(i=1;i<=K;i++)
    {
        Kfac=Kfac*i;
    }
        temp=N-K;//temp is define for factorial of (N-K)
    for(i=1;i<=temp;i++)
    {
        NKfac=NKfac*i;
    }
    NcK= Nfac/((Kfac)*(NKfac));//NcK is number of ways of choosing k elements from n
     
    printf("Number of way to choose k elements from N is %ld",NcK);
    return 0;
}