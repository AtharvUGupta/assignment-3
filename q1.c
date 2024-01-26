#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of number\n");
    scanf("%d",&n);
    if(n>0){
        printf("Number is positive\n");
    }
    else if(n==0){
        printf("Number is equal to zero\n");
    }
    else{
        printf("Number is negative\n");
    }
    return 0;
}