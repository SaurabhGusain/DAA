#include <stdio.h>
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
        for(k=0;k<n;k++)
        {
            c++;
            if(arr[k]==key)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("Not present %d",c);
        else
            printf("Present %d",c);
    }
return 0;    
}