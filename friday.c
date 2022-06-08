#include<stdio.h>
void nhapmang(int a[], int *n)
{
    *n=-1;
    while (*n<=0)
    {
        printf("Enter the number of elements in the array :");
        scanf("%d",n);    
    }
    
    int i;
    for(i=0;i<*n;i++)
    {
        printf("   A[%d]=",i);
        scanf("%d",&a[i]);  
    }
}
int findNumber(int b[],int n,int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(x==b[i])
        {
            return 0;
        }
    }
    return 1;
}
void showResult(int b[],int n)
{
    int i;
    printf("\n Result: ");
    for(i=0;i<n;i++)
    {
        printf("%d     ",b[i]);
    }
}
void in(int arr[],int n)
{
    int b[n];
    int dem=0;
    int index;
    int i;
    for(i=0;i<n;i++)
    {
          index=findNumber(b,dem,arr[i]);
          if(index==1)
          {
              b[dem]=arr[i];
              dem++;
          }    
    } 
    showResult(b,dem);
}




int main()
{
    int arr[100];
    int n;
    nhapmang(arr,&n);
    in(arr,n);
    return 0;
}