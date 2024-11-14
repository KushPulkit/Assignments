#include<stdio.h>
#include<math.h>
int main(){
    int num,count=0,sum=0,d;
    printf("Enter your number: ");
    scanf("%d",&num);
    int temp=num;
    while(temp!=0){
    count++;
    temp=temp/10;
    }
    temp=num;
    while(temp!=0){
    d=temp%10;
    sum=sum+pow(d,count);
    temp=temp/10;
    }
    if(sum==num)
    printf("Armstrong number");
    else
    printf("Not Armstrong number");
    return 0;
}