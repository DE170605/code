#include<stdio.h>
#define N 100;
void nhapmang(int a[], int n)
{

    int i;
    for(i=0;i<n;i++)
    {
        printf("   A[%d]=",i);
        scanf("%d",&a[i]);
        
    }
}
void xuatmang(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("     %d",a[i]);        
    }
    printf("\n\n");
}
void check(int a[],int b[],int n)
{
   int i;
   int j;
   for(i=0;i<n-1;i++)
   {     
       if(b[i]!=1)
       {
            b[i]=0;
            for(j=i+1;j<n;j++)
            {
            if(a[i]==a[j])
                {
                b[j]=1;
                }
            }
       }
   }
   if(b[j]!=1)
   {
    b[j]=0;
   }

}
void dem(int a[],int n,int x,int *amount)
{
    int i;
    *amount=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            *amount=*amount+1;
        }
    }
}
void result(int a[], int b[], int n)
{
    int i;
    int amount;
    for(i==0;i<n;i++)
    {
        if(b[i]==0)
        {
            dem(a,n,a[i],&amount);
            printf("%d --------%d\n\n",a[i],amount);
        }
    }




}

int main()
{
    int a[100];
    int b[100];
    int n;
    
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d",&n);
    
    nhapmang(a,n);
    xuatmang(a,n);

    printf("====================================Result====================================\n");
    result(a,b,n);
      
    return 0;
}
