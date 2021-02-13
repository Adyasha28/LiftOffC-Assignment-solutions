# include<stdio.h>
# include<string.h>
int main(){
    int i,j,n;
    printf("enter n:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=0;j<=n;j++){
            if(i==j || (i==n-j-1)){
            printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}