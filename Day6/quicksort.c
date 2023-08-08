#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
    int n,a[20],i;
    clock_t start,end;
    double t;
    printf("enter th range\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    start=clock();
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);;
    quicksort(a,0,n-1);
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    end=clock();
    t=(double)(end-start)/ CLOCKS_PER_SEC;
    printf("time taken is:%f",t);
    return 0;
}
void quicksort(int a[],int l,int r)
{
    int s;
    if(l<r)
    {
        s=partition(a,l,r);
        printf("fixed position is %d\n",s);
        quicksort(a,l,s-1);
        quicksort(a,s+1,r);
    }
    return;
}
int partition(int a[],int l,int r)
{
    int temp,var;
    int p=a[l];
    int i=l;
    int j=r+1;
    do
    {
        do
        {
            i++;
        }
        while(a[i]<p&&i<r);
        do{
            j--;
        }
        while(a[j]>p&&j>l);
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    while(j>i);
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    var=a[j];
    a[j]=a[l];
    a[l]=var;
    return j;
}
