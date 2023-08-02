#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,rev,rem,temp;
    printf("enter the number:\n");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==temp)
        printf("It is Palindrome");
    else
        printf("Its not");
    return 0;
}
