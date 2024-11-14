#include<stdio.h>
void coord(int x,int y){
if(x>0 && y>0)
    printf("The coordinate point (%d,%d) lies in First Quadrant",x,y);
else if(x>0 && y<0)
    printf("The coordinate point (%d,%d) lies in Fourth Quadrant",x,y);
else if(x<0 && y>0)
    printf("The coordinate point (%d,%d) lies in Second Quadrant",x,y);
else if(x<0 && y<0)
    printf("The coordinate point (%d,%d) lies in Third",x,y);
else if(x==0 && y!=0)
    printf("The coordinate point (%d,%d) lies Y axis",x,y);
else if(y==0 && x!=0)
    printf("The coordinate point (%d,%d) lies X axis",x,y);
else
    printf("The coordinate point (%d,%d) lies on origin",x,y);
}    
int main(){
int x,y;
printf("Enter Coordinate: ");
scanf("%d %d",&x,&y);
coord(x,y);
}