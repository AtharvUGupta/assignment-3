#include<stdio.h>
int main(){
    int a, b,c;
   printf("Enter the value of sides of triangle\n");
   scanf("%d %d %d ",&a ,&b ,&c);
   if(a+b>c){
   if(a+c>b){
    if(b+c>a){
        printf("It is a triangle");
    }
   }
   }
   else{
    printf("It is not a triangle");
   }
}