#include <stdio.h>
int i,j,temp,start,end;
int main() {
    printf("enter the starting range:");
    scanf("%d",&start);
    printf("enter the ending range:");
    scanf("%d",&end);
    for(i=start; i<=end; i++)
    {
        temp=0;
        for(j=1; j<=end; j++)
        {
            if(i%j==0)
                temp++;
        }
        if(temp==2)
            printf("%d " ,i);
    }
}
