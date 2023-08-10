#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10],i,n,ele;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The input elements are\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nenter the element to search\n");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
            printf("%d is present\n",ele);
            exit(0);
        }
    }
    printf("Search unsuccessful\n");
}




