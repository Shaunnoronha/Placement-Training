#include <stdio.h>
int num;
void two(){
    if(num==2){
        printf("its a prime number");
    }
}
void prime(){
    two();
    if(num%2==0){
        printf("not a prime number");
    }else{
        printf("its a prime number");
    }
}
int main() {
    int num;
    printf("enter the number:");
    scanf("%d",&num);
if(num==0||num==1){
flag=1;
    prime();
}