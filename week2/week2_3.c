#include<stdio.h>
int main()
{
    int t,i,n,j,k,key,c,flag;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        flag=0;
        c=0;
        scanf("%d",&n);
        int arr[n];
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[j]);
        }
        scanf("%d",&key);
        for(k=1;k<n;k++)
        {
            for(j=0;j<k;j++)
            {
                if(arr[j]-arr[k]==key ||arr[k]-arr[j]==key)
                    c++;
            }
            
        }
        if(c==0)
            printf("Not present \n");
        else
            printf("%d \n",c);
    }
return 0;    
}