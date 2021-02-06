# include<stdio.h>

int main(){
    int C,F;
    printf("enter the temperature in celsius\n");
    scanf("%d", &C);
    F=((9*C)+160)/5 ;
    printf("temp in fahrenheit=%d\n" , F);
    return 0;

}