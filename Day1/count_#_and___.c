#include <stdio.h>
#include <stdlib.h>
int main()
{
    int l,count,count1;
    char S[10];
    printf("enter the string\n");
    scanf("%s",S);
    l=strlen(S);
    for(int i=0;S[i]!='\0';i++){
        if(S[i]=='*'){
            count++;
        }else{
            count1++;
        }
    }
    if(count==count1){
        printf("0");
    }else{
        printf("1");
    }
    return 0;
}
