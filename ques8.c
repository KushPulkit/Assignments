#include<stdio.h>
void cal(int a){
for(int i=0;i<a;i++){
    for(int j=0;j<=i;j++){
        if((i+j)%2==0)
        printf("1");
        else
        printf("0");
    }
    printf("\n");
}
}
int main(){
    int a;
    printf("Enter height: ");
    scanf("%d",&a);
    cal(a);
    return 0;
}