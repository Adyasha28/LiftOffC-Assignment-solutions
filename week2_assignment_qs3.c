# include<stdio.h>
# include<string.h>
int main(){
   
    int i,count=1;
     char str[200];
    printf("enter the string\n");
    gets(str);
    
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t'){
            count++;
        }
    }   
        printf("the no. of words in a string is=%d", count);
        
    return 0;
}