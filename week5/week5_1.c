#include<stdio.h>
int main()
{
    int t,i,j,n,key,a;
    scanf("%d",&t);
    while(t--)
    {
        fflush(stdin);
        scanf("%d",&n);
        char arr[n];
        int count[27]={0};
        for(j=0;j<n;j++)
        {
            scanf("%c",&arr[j]);
        }
        for(j=0;j<n;j++)
        {
            int a=arr[j]-'a';
             count[a]++;
        }

        int max=0;
        for(j=0;j<27;j++)
        {
            if(count[j]>count[max])
                max=j;
        }
        if(count[max]==1||count[max]==0)
        { 
            printf("No Duplicate Present\n");
        }
        else{
            char c=(char)max+'a';
            printf("%c-%d",c,count[max]);
        }
    }
return 0; 
}