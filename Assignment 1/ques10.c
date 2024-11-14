#include <stdio.h>
int fac(int x){
    int f=1;
    if(x==0||x==1)
        return 1;
    else{
        for(int i=1;i<=x;i++)
            f=f*i;
        return f;
    }
}
int main(){
    int n;
    int t=0;
    int flag;
    printf("Enter height of pascal triangle: ");
    scanf("%d",&n);
    int p=n-1;
    for(int i=0;i<n;i++){
        for(int m=0;m<p;m++) // printing spaces
            printf(" ");
        p--;
        while(t>=0 && t<=i)
        {
            flag=fac(i)/(fac(i-t)*fac(t)); // nCr calculation
            printf("%d ",flag);
            t++;
        }
        t=0;
        printf("\n");
    }
}