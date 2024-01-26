#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value of numbers \n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            printf("%d is the largest",a);
        }
        else{
            printf("%d is the largest ",c);
        }
    }
    else{
        if (b>c){
            printf("%d is the largest",b);
        }
        else{
            printf("%d is the largest",c);
        }
    }
    return 0;

}