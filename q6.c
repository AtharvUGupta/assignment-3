#include<stdio.h>
#include<math.h>

int main(){
    int num;
    printf("Enter the value of number: \n");
    scanf("%d",&num);
    if(num<3){
        printf("Not possible");
    }
    int sqnum=pow(num,2);
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
    else if(sqnum>100&&sqnum<10000){
        int c=sqnum%100;
        int d=sqnum/100;
        if(d<10){
            int e=d%10;
            if(c+e==num){
               printf("It is a Kaperakar number");
            }
            else{printf("it is not a Kaperakars number");
            }
            
        }
        else if(d>10){
            int e=d%100;
             if(c+e==num){
               printf("It is a Kaperakar number");
            }
            else
            {printf("It is not a Kaperakars number");
           }

        }
    }
    

}