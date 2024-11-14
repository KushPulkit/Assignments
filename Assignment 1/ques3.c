#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    int sub=a+(~b+1);
    printf("Subtraction Result: %d",sub);
    return 0;
}