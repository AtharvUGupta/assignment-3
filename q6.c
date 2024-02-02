#include<stdio.h>


int main(){
    int num;
    printf("Enter the value of number: \n");
    scanf("%d",&num);
    if(num==1){
        printf("It is a Kaperakars number");
    }
    if(num<3){
        printf("Not possible");
    }
    int sqnum=num*num;
    if(sqnum<=100){
        int c=sqnum%10;
        int d=(sqnum/10)%10;
        if(c+d==num){
            printf("It is a Kaperakar number");

        }
        else{
            printf("It is not a Kaperakers number");
        }
    }
    else if(sqnum>100 &&sqnum<10000){
        int c=sqnum%100;
        int d=sqnum/100;
        if(c+d==num){
            printf("It is a Kaperaker number");
        }
        else{
            printf("It is not a Kaperakers number");
        }
          
    }
     if(sqnum>10000 &&sqnum<1000000){
        int c=sqnum%1000;
        int d=sqnum/1000;
        if(d+c==num){
            printf("It is a  kaperakars number");
        }
        else{
            printf("It is not a kaperakers nmber");
        }
    }
     if(sqnum>1000000 &&sqnum<100000000){
        int c=sqnum%10000;
        int d=sqnum/10000;
        if(d+c==num){
            printf("It is a  Kaperakars number");
        }
        else{
            printf("It is not a Kaperakers number");
        }
    }
     return 0;

}
