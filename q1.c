#include<stdio.h>
#include<conio.h>

void main()
{ 
    float r,area;
    const float pi=3.14;

    printf("enter the area of the circle :");
    scanf("%f",&r);
    area=pi*r*r;
    printf("area of circle : %.2f,",area);
}