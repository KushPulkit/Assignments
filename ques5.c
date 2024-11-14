#include<stdio.h>
int cal(int a){
    int sum=0;
    printf("Proper Divisors: ");
for(int i=1;i<a;i++){
    if(a%i==0){
    sum=sum+i;
    printf("%d ,",i);
    }
}
return sum;
}
int main(){
    int a;
    printf("Enter your number: ");
    scanf("%d",&a);
    int sum=cal(a);
    (a==sum)?printf("\nPerfect Number"):printf("\nNot Perfect Number");
    return 0;
}