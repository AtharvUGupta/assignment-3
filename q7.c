#include<stdio.h>
int main(){
    float M,N,K;
    float W;
    printf("Enter the marks obtained:\t");
    scanf("%f",&M);
    if(M<0||M>100){
        printf("Not possible");
    }
     printf("Enter the total number of class conducted: \t");
     scanf("%f",&K);
    printf("Enter the total number of classes attended: \t");
    scanf("%f",&N);
    if(N>K){
        printf("Not possible");
    }
     W=(N/K);
    float T=M*W;
    
    printf("Final score= %f\n",T);
    if(T>=90){
        printf("Grade is = EX");
    }
    else if(T>=80&&T<89){
         printf("Grade is = A");

    }
    else if(T>=70&&T<79){
         printf("Grade is = B");

    }
    else if(T>=60&&T<69){
         printf("Grade is = C");

    }
    else if(T>=50&&T<59){
         printf("Grade is = D");

    }
    else if(T>=40&&T<49){
         printf("Grade is = P");

    }
    else{
        printf("Grade is = F");
    }
}
