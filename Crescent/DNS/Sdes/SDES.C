#include<stdio.h>
#include<conio.h>

void main(){

char k1[10],k2[10],s[11],t[11];
int i;
int p10[10]={6,7,8,9,10,1,2,3,4,5};
int p8[8]={6,7,8,9,1,2,3,4};
clrscr();

printf("Enter 10bit inpt");
scanf("%s",s);
s[10]='\0';


for(i=0;i<10;i++)
	t[i]=s[p10[i]-1];

for(i=0;i<5;i++)
	if(i==4)
		t[i]=t[0];
	else
		t[i]=t[i+1];


for(i=5;i<10;i++)
	if(i==9)
		t[i]=t[5];
	else
		t[i]=t[i+1];
printf("After ls1 \n");
puts(t);
for(i=0;i<8;i++)
	k1[i]=t[p8[i]-1];
printf("\n After p8 \n");
puts(k1);



getch();
}