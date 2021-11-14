#include<stdio.h>
void binarysearch(int arr[],int l,int x,int r)
{
    int c=0,m,flag=0;
    while(l<=r)
    {
        m=(l+r)/2;
        if(arr[m]==x)
        {
            c++;
            flag=1;
            break;
        }
        else if(arr[m]<x)
            l=m+1;
        else
            r=m-1;
        c++;
    }
     if(flag==0)
            printf("Not present %d",c);
        else
            printf("Present %d",c);
}
int main()
{
    int t,i,n,j,key;
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
        binarysearch(arr,l,key,n-1);
    }
return 0;    
}