#include<stdio.h>
int main(){
    int days;
    printf("Enter the total number of days\n");
    scanf("%d",&days);
   
    if(days>0 && days<=5){
       int fine= days *1;
       printf("The fine is %d",fine);
       }
       else if(days>=6&&days<=10){
        int fine= 5 + ((days-5)*2);
         printf("The fine is %d",fine);

       }
       else if(days>10&&days<=30){
        int fine=15 +((days-10)*5);
         printf("The fine is %d",fine);
        
       }
       else{
        printf("Your membership is cancelled");
       }
        return 0;

}
