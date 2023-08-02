#include <stdio.h>
#include <stdlib.h>

int main()
{
        int inp,ref=0,n,min,max=0;
        printf("enter the size ");
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&inp);
            if(inp>max)
            {
                max=inp;
            }
            if(inp<min)
            {
                min=inp;
            }
        }
        printf("min=%d max=%d",min,max);
}

