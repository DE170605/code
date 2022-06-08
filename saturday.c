#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int ranDom()
{
    srand(time(NULL));
    return 10-rand()%20;
}
int findOut(int arr[],int n,int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(x==arr[i])
        {
            return 0;
        }
    }
    return 1;
}
void putArray(int arr[],int n)
{
    
    int i;
    int x;  
    for ( i = 0; i < n; i++)
    {
        x=ranDom();

        if(arr[i-1]!=x)
        {
            arr[i]=x;
        }
        else
        {
            i--;
        }
    }
}
void showArray(int arr[],int n)
{
    int i;
    printf("\n----------------------------------------Result----------------------------------------\n\n");
    for(i=0;i<n;i++)
    {
        printf("%5d",arr[i]);
    }
}
int main()
{
    int arr[100];
    int n;
    n=0;
    while (n<=0)
    {
       printf("Enter the number of elements in the array :");
       scanf("%d",&n);
    }
    putArray(arr,n);
    showArray(arr,n);
    return 0;
}