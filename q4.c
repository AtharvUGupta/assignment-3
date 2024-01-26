#include<stdio.h>
int main(){
    int x1,y1,x2,y2,x3,y3;
    printf("Enter the values of points\n");
    scanf("%d %d %d %d %d %d ",&x1,&y1,&x2,&y2,&x3,&y3);
    printf("The points are :\n");
    printf("a  (%d,%d)\n",x1,y1);
    printf("b  (%d,%d)\n",x2,y2);
    printf("c  (%d,%d)\n",x3,y3);
    int d=x1*y2-x1*y3-y1*x2+x3*y1+x2*y3-y2*x3;
    if(d==0){
        printf("Points are collinear");
    }
    else{
        printf("Non collinear");
    }
    
    
}