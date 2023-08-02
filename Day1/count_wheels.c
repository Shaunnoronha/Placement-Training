#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tw,fw,w,v;
    scanf("%d%d",&v,&w);
    fw=(w-2*v)/2;
    tw=(v-fw);
    printf("TW=%d FW=%d",fw,tw);
    return 0;
}
