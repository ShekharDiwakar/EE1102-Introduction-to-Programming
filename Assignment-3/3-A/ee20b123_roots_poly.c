#include<stdio.h>
#include<math.h>
int main()
{
    float A,B,C,r1,r2,D;
    printf("Enter the coefficients : ");
    scanf("%f %f %f",&A,&B,&C);
    D= B*B-4*A*C;
    if(D<0)
    {
        printf("\nRoots are complex");
        printf("\nr1 = %f+%fi",-B/(2*A),(sqrt(-D))/2*A);
        printf("\nr2 = %f-%fi",-B/(2*A),(sqrt(-D))/2*A);
    }
    else if(D==0)
    {
        printf("\nRoots are equal");
        r1=r2= -B/2*A ;
        printf("\nr1=r2=%f",r1);
    }
    else
    { 
        printf("\nRoots are real and distinct");
        r1= -B/2*A + (sqrt(D))/2*A;
        r2= -B/2*A - (sqrt(D))/2*A;
        printf("\nr1=%f",r1);
        printf("\nr2=%f",r2);
    }
    return 0;
}