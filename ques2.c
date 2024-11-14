#include<stdio.h>
int hcf(int a,int b){
    int h;
int min = (a<b)?a:b;
for(int i=min;i>=1;i--){
    if(a%i==0 && b%i==0){
    h=i;
    break;
    }
}
 return h;
}
int main(){
int a,b;
printf("Enter two numbers: ");
scanf("%d %d",&a,&b);
int h=hcf(a,b);
printf("HCF is %d",h);
}