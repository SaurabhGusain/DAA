#include<stdio.h>
#include<math.h>
int main()
{
    int t,i,n,j,k,l,key,c,flag,p;
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
        i=0;
        k=0;
        while(key>arr[k] && k<n)
        {            
             k = (k==0) ? 2 : k*2;
        }
        p=k/2;
        k= (k>=n) ? n-1 : k ;
        while(p<=k)
        {
            c++;
            if(arr[p]==key)
            {
                flag=1;
                break;
            }
            p++;
        }
        if(flag==0)
            printf("Not present %d\n",c);
        else
            printf("Present %d\n",c);
    }
return 0;    
}