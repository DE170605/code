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

void createArrayS(int a[],int n,int b[],int m,int s[],int *max)
{
   *max=(n>m)?n:m;
   int min=(n<m)?n:m;
   
   int i;
   for(i=0;i<=min;i++)
   {
       s[i]=a[i]+b[i];
   }
   for(i=min+1;i<=*max;i++)
   {
       s[i]=a[i]+b[i];
   }

}
void showResult(int s[],int n)
{
    int i;
    printf("\nS(x)=");
    for(i=n;i>=0;i--)
    {
       

      
      
    }
}
int main()
{
    int a[100]={0};
    int b[100]={0};
    int s[100]={0};
    int n,m,d;

    printf("-----------------------------------------------Array a--------------------------------------------------\n");
    putArray(a,&n);
    showArray(a,n);
    printf("\n\n---------------------------------------------Array b-------------------------------------------------\n");
    putArray(b,&m);
    showArray(b,m);
    
    createArrayS(a,n,b,m,s,&d);
    showResult(s,d);
    
    return 0;






}