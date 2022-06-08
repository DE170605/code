#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void putArray(int arr[],int *n)
{
    
    srand(time(NULL));

    *n=-1;
    while (*n<=0)
    {
        printf("Enter the number of element in Array : ");
        scanf("%d",n);
    }
    int i;
    for(i=0;i<*n;i++)
    {
        arr[i]=10-rand()%20;
    }
}
void showArray(int arr[],int n)
{
    
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("%5d",arr[i]);
    }   
}
void result(int arr1[],int arr2[],int n, int m,int k)
{
    k=-1;
    while (k<0 || k>=n)
    {
       printf("Enter the location to insert  in array 1:");
       scanf("%d",&k);
    }
    
    int i;
    for(i=k;i<n;i++)
    {
        arr1[i+m]=arr1[i];
    }
    i=0;
    int count=0;
    for(i=k;i<n+1;i++)
    {
        arr1[i]=arr2[count++];
    }

}
int main()
{
    int arr1[100];
    int arr2[100];
    int n,m,k;

    
    putArray(arr1,&n);
    printf("\nShow array1 : ");
    showArray(arr1,n);
    printf("\n");
    putArray(arr2,&m);
    printf("\nShow array2 : ");
    showArray(arr2,m);

    printf("\n\n +++++++++++++++++++++++++++++++++RESULT+++++++++++++++++++++++++++++++++++\n");
    result(arr1,arr2,n,m,k);
    showArray(arr1,n+m);

    return 0;
}