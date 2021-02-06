# include<stdio.h>

int main(){

    char alphabet;
    printf("enter the alphabet\n");
    scanf("%c", &alphabet);
    switch(alphabet)
    {
        case 'a':
          printf("this is a vowel");
          break;
        case 'e':
          printf("this is a vowel");
          break;
         case 'i':
           printf("this is a vowel");
           break;
         case 'o':
           printf("this is a vowel");
           break;
         case 'u':
           printf("this is a vowel");
           break;
         default:
           printf("this is a consonant");
    }
    return 0;
}