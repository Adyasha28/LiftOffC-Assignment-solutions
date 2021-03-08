# include<stdio.h>
int reverse(int num){
    int digit=(int)log10(num);
    if(num==0)
       return 0;
    else   
       return(num%10 * pow(10,digit)+reverse(num/10));
}

int palindrome(int num){
    if(num==reverse(num)){
       printf("the num is palindrome");
    }
    return 0;
}
int main(){
    int number;
    printf("enter the number");
    scanf("%d",&number);
    printf("the number is palindrome or not",palindrome(number));
    return 0;

}