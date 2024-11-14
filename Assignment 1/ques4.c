#include<stdio.h>
void temp();
void xor();
void divide();
void add();

void temp(int a,int b){
    printf("\nUsing Third Variable: \n");
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("Value of a: %d\nValue of b: %d",a,b);
}
void xor(int a,int b){
printf("\nUsing XOR bitwise operator: \n");
a=a^b;
b=a^b;
a=a^b;
printf("Value of a: %d\nValue of b: %d",a,b);
}
void divide(int a,int b){
printf("\nUsing Multiply and Divide :\n");
a=a*b;
b=a/b;
a=a/b;
printf("Value of a: %d\nValue of b: %d",a,b);
}
void add(int a,int b){
    printf("\nUsing Addition and Subtraction: \n");
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Value of a: %d\nValue of b: %d",a,b);
}
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Value of a: %d\nValue of b: %d",a,b);
    printf("\nDifferent methods of exchanging: \n");
    temp(a,b);
    add(a,b);
    divide(a,b);
    xor(a,b);
}