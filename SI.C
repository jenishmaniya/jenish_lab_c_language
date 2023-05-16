#include<stdio.h>
#include<conio.h>
void main(){
int p;
int r;
int t;
int a=100;
float s;
clrscr();
printf("value of principle:");
scanf("%d",&p);
printf("value of rate:");
scanf("%d",&r);
printf("value of time:");
scanf("%d",&t);
s=(p*r*t)/a;
printf("simple interst:%f",s);
getch();
}