# include<stdio.h>

int main(){
    int num,remainder,sum=0;
    printf("enter the number\n");
    scanf("%d",&num);
    while(num!=0){
        remainder=num%10;
        sum=sum+remainder;
        num=num/10;
    }
    printf("the sum of the digits of a num is=%d\n",sum);
    return 0;


}