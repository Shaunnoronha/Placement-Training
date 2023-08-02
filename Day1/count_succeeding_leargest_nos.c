#include <stdio.h>
#include <stdlib.h>

int main()
{
        int inp,ref=0,n,count=0;
        printf("enter the size ");
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&inp);
            if(inp>ref)
            {
                count++;
                ref=inp;
            }
        }
        printf("%d",count);
}

