#include<stdio.h>
int main()
{
     int t,i,j,n,key,flag=0;
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
        for(j=0;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
                if(arr[j]+arr[k]==key)
                {
                    printf("%d %d,",arr[k],arr[j]);
                    flag=1;
                }
        }
        if(flag==0)
            printf("No such pair exist");
    }
return 0;
}