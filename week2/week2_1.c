#include<stdio.h>
int binarysearch(int arr[],int left,int x,int right)
{
    int c=0,m,i= -1,j= -1,l=left,r=right;
    while(l<=r)
    {
        m=(l+r)/2;
        if(arr[m]==x)
        {
            i=m;
            r=m-1;
        }
        else if(arr[m]<x)
            l=m+1;
        else
            r=m-1;
    }
    l=left,r=right;
     while(l<=r)
    {
        m=(l+r)/2;
        if(arr[m]==x)
        {
            j=m;
            l=m+1;
        }
        else if(arr[m]<x)
            l=m+1;
        else
            r=m-1;
    }
    return j-i+1;
}
int main()
{
    int t,i,n,j,k,key,c,flag;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        int arr[n];
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[j]);
        }
        scanf("%d",&key);
        int l=0;
        c=binarysearch(arr,l,key,n-1);
        if(c==0)
            printf("Key Not present \n");
        else
            printf("%d-%d \n",key,c);
    }
return 0;    
}