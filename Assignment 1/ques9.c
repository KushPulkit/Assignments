#include<stdio.h>
void cal(int a){
int spc=(a*2)-2,sp=0;
for(int i=0;i<a;i++){
    for(int j=0;j<=i;j++){
        if((i+j)%2==0)
        printf("1");
        else
        printf("0");
    }
    while(sp<spc){
        printf(" ");
        sp++;
    }
    for(int j=0;j<=i;j++){
        if((i+j)%2==0)
        printf("1");
        else
        printf("0");
    }
    printf("\n");
    sp=0;
    spc=spc-2;
}
}
int main(){
    int a;
    printf("Enter height: ");
    scanf("%d",&a);
    cal(a);
    return 0;
}