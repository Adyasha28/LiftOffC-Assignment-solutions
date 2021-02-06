# include<stdio.h>

int main(){
    int physics,chemistry,biology,mathematics,computer;
    float percentage;
    printf("enter physics marks=%d/n");
    scanf("%d", &physics);
    printf("enter chemistry marks=%d\n");
    scanf("%d", &chemistry);
    printf("enter biology marks=%d\n");
    scanf("%d", &biology);
    printf("enter mathematics marks=%d\n");
    scanf("%d", &mathematics);
    printf("enter computer marks=%d\n");
    scanf("%d", &computer);
    percentage=((physics+chemistry+biology+mathematics+computer)/5.0);
    printf("overall percentage of the student=%.2f\n", percentage);
    if(percentage>=90)
     printf("grade A");
    else if(percentage>=80)
    {
        printf("grade B");
    }
    else if(percentage>=70){
        printf("grade C");
    }
    else if(percentage>=60){
        printf("grade D");
    }
    else if(percentage>=40){
        printf("grade E");
    }
    else if(percentage<40){
        printf("grade F");
    }
    return 0;
}

    
    


