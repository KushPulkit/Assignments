#include<stdio.h>
#include<math.h>

void dec(int a){
int div=0,d,n=0,c=0,z=0;
while(a!=0){
d=a%2;
div=div*10+d;
a=a/2;
z=z+d;
if(z==0) //counts trailing zero of the binary number
c++;
}
while(div!=0){
    d=div%10;
    n=n*10+d;
    div=div/10;
}
double t=pow(10,c);
n=n*t;
printf("Binary is %d",n);
}

void bin(int a){
int d,sum=0,i=0,temp=a;double s;
while(temp!=0){
    d=temp%10;
    temp=temp/10;
}
while(a!=0){
    d=a%10;
    s=pow(2,i);
    sum=sum+d*s;
    a=a/10;
    i++;
}
printf("Decimal is %d",sum);
}

int main(){
    int num,ch;
    printf("Enter your number: ");
    scanf("%d",&num);
    printf("1. Decimal to Binary\n2. Binary to Decimal\nEnter your choice: ");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        dec(num);
        break;
        case 2:
        bin(num);
        break;
        default:
        printf("Invalid Choice!");
    }
    return 0;
}