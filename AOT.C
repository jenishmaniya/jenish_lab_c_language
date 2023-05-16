#include<stdio.h>
#include<conio.h>
void main(){
int b;
int h;
const float c=2;
int d;
clrscr();
printf("enter the value of base:");
scanf("%d",&b);
printf("enter the value of height:");
scanf("%d",&h);
d=(b*h)/c;
printf("value of triangle: %d",d);

getch();
}