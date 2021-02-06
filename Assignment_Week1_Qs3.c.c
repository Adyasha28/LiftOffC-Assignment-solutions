# include<stdio.h>

int main(){
    int radius,diameter,circumference,area;
    printf("enter the radius=\n");
    scanf("%d", &radius);
    diameter=2*radius;
    circumference=2*3.14*radius;
    area= 3.14*radius*radius;
    printf("diameter of the circle is=%d\n", diameter);
    printf("circumfernce of the circle is=%d\n", circumference);
    printf("area of the circle is=%d\n", area);
    return 0;

}