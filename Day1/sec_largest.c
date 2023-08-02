#include <stdio.h>
#include <stdlib.h>

int main()
{
        int inp,ref=0,n,min=0,max=0,smax=0,smin=0;
        printf("enter the size ");
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&inp);
            if(inp>max)
            {
                smax=max;
                max=inp;
            }
            if(inp<min)
            {
                smin=min;
                min=inp;
            }
        }
        printf("smin=%d smax=%d",min,max);
}

