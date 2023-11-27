#include<stdio.h>
#include<string.h>                              t
#include<conio.h>

void main(){
int a,b,r=0;
clrscr();

printf("A,B= \n");
scanf("%d %d",&a,&b);

while(b!=0){
	r=a%b;
	a=b;
	b=r;
	printf("%d %d %d \n",r,a,b);

}

getch();

}