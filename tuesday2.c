#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void putArray(int arr[],int *n)
{
    
    

    *n=-1;
    while (*n<=0)
    {
        printf("Enter the number of element in Array : ");
        scanf("%d",n);
    }
    int i;
    for(i=0;i<*n;i++)
    {
        //printf("arr[%d]",i);
        scanf("%d",&arr[i]);
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
void findLocation(int arr[],int n,int start[],int end[],int *count)
{
    int j=0;
    int i;
    start[j]=0;
    for(i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            end[j++]=i;
            start[j]=i+1;
        }
    }
    end[j]=n-1;
    *count=j+1;
}
int  findMaxLengthOfArray(int start[],int end[],int count)
{
    int max=end[0]-start[0]+1;
    int length;
    int i;
    
    for(i=1;i<count;i++)
    {
        length=end[i]-start[i]+1;
        if(max<length)
        {
            max=length;
        }
    }
    return max;
}
void showMaxLength(int arr[],int a,int b)
{
    int i;
    for ( i = a; i <= b; i++)
    {
        printf("%5d",arr[i]);
    }
    printf("\n");
}
void result(int arr[],int n,int start[],int end[],int count)
{
    int i;
    int max=findMaxLengthOfArray(start,end,count);
    int length;
    if(max==1)
    {
        printf("\nArray tends to decrease\n ");
    }
    else
    {
        for(i=0;i<count;i++)
        {
            length=end[i]-start[i]+1;
            if(length==max)
            {
                showMaxLength(arr,start[i],end[i]);
            }
        }
    } 
}




int main()
{
    int arr[100];
    int n;
    int count;
    int start[100];
    int end[100];
    printf("==========================PUT in Array============================\n");
    putArray(arr,&n);
    printf("\n==========================Array===================================\n");
    showArray(arr,n);

    findLocation(arr,n,start,end,&count);

    printf("\n==========================Result=================================\n");
    result(arr,n,start,end,count);


    return 0;
}