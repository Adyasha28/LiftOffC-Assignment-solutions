# include<stdio.h>
int main(){
    int n,i,a[100],sum=0,sum1=0;
    printf("enter the no. of elements in array\n");
    scanf("%d",&n);
    printf("enter the elements of the array\n");
    for(i=0;i<=n-1;i++)
    scanf("%d",&a[i]);
    if(a[i]%2==0){
        sum=sum+a[i];
         }
    if(i%2==0){
        sum1=sum1+a[i];
     }
    printf("the sum of all the even elements=%d",sum);   
    printf("the sum of all the even position elements=%d",sum1);
    printf("the sum of all even elements and even position elements=%d",sum+sum1);

    return 0;
}