#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
void putArray(int arr[],int *n)
{
    *n=-1;
    while (*n<=0)
    {
        printf("Enter the number of element in Array : ");
        scanf("%d",n);
    }
    int i;
    for(i=0;i<*n+1;i++)
    {
        scanf("%5d",&arr[i]);
    }
}
void showArray(int arr[],int n)
{
    
    int i;
    for ( i = 0; i < n+1; i++)
    {
        printf("%5d",arr[i]);
    } 
}
double enterValueOfX() 
{
    double x;
    printf("\n Enter Of Value  X=");
    scanf("%lf",&x);
    return x;
}
void  valueOfthePolynomialPx(int arr[],int n,double x)
{
    int i;
    double s=0;
    double mu;
    for(i=0;i<n+1;i++)
    {
        mu=pow(x,i);
        s+=arr[i]*mu;
    }
    
   printf("\n Px=%0.3lf",s);
}
void showResult(double s)
{
    printf("\nP(x)=%0.3lf",s);
}
int main()
{
    int arr[100];
    int n;
    double x;
    putArray(arr,&n);
    showArray(arr,n);
    x=enterValueOfX();
    valueOfthePolynomialPx(arr,n,x);
    return 0;
}



